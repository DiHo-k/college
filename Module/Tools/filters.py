from aiogram import types
from aiogram.filters import Filter
from Module.Bot.settings import AdminList

class IsAdmin(Filter):
    async def __call__(self, message: types.Message):
        return str(message.from_user.id) in AdminList

