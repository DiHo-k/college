from aiogram import F, Router, types
from aiogram.filters import Command
from aiogram.types import Message
from aiogram import flags
from aiogram.fsm.context import FSMContext
# from Module.Tools import utils
from Module.Tools.states import HomeWork
# import Module.Bot.kb as kb
# import Module.Bot.text as text
from Module.Tools.filters import IsAdmin
from aiogram.types.callback_query import CallbackQuery

router = Router()

@router.message(Command("start"),IsAdmin())
async def start_handler(msg: Message):
    await msg.answer("Привет {name}".format(name=msg.from_user.id))