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
from Module.Tools import SQLite
import Module.Tools.FilePath as FilePath

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
    lst = msg.text.split(", ")
    Name = lst[0]
    own_group = lst[1]
    Key = "".join([random.choice(string.ascii_lowercase + string.digits if i != 5 else string.ascii_uppercase) for i in range(20)])
    SQLite.writeInfo(FilePath.people, f"INSERT INTO teacher (Name, Key, own_group) VALUES (%s,%s,%s)", (Name, Key, own_group))
    await msg.answer(f"Викладач {Name} був успішно створений, для того щоб авторизуватись в боті йому потрібно надіслати `/login {Key}`",parse_mode="Markdown")
    await state.clear()
    
@router.message(Command("login"))
async def login(msg: Message):
    key = msg.text.split(" ")[1]
    usrid = msg.from_user.id
    temp = SQLite.readInfo(FilePath.people,f"SELECT * FROM teacher WHERE Key = '{key}'")
    print(temp)
    if temp[0][4] is None:
        await msg.answer(f"Вітаю {temp[0][1]}")
        SQLite.writeInfo(FilePath.people, f"UPDATE teacher set user_id = ? WHERE Key = ?", (usrid,key))
    else:
        await msg.answer('Такий користувач вже активований')
    