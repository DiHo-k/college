from aiogram import F, Router, types
from aiogram.filters import Command
from aiogram.types import Message
from aiogram import flags
from aiogram.fsm.context import FSMContext
from aiogram.fsm.state import State
import random
import string
from Module.Tools.states import HomeWork, Teacher
import Module.Bot.kb as kb
from Module.Tools.filters import IsAdmin
from aiogram.types.callback_query import CallbackQuery
import Module.Tools.SQLite

router = Router()

@router.message(Command("admin"),IsAdmin())
async def start_handler(msg: Message):
    await msg.answer("Привет {name}".format(name=msg.from_user.id), reply_markup=kb.admin_panel)
    
    
@router.message(F.text == "Створити викладача", IsAdmin())
async def create_teacher(msg: Message, state: FSMContext):
    await state.set_state(Teacher.tc)
    await msg.answer(text="Створення нового викладача по формі:\n ПІБ, група\n Приклад: Авраменко Михайло Костянтинович, kn1501")
    
@router.message(Teacher.tc)
async def process_teacher(msg: Message, state: FSMContext):
    await state.update_data(tc = msg.text)
    print(msg.text.split(", "))
    text = [random.choice(string.ascii_lowercase + string.digits if i != 5 else string.ascii_uppercase) for i in range(20)]
    await state.clear()