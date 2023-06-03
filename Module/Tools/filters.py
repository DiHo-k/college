from aiogram import types
from aiogram.filters import Filter
from Module.Bot.settings import AdminList
from Module.Tools import SQLite
from Module.Tools import FilePath

class IsAdmin(Filter):
    async def __call__(self, message: types.Message):
        return str(message.from_user.id) in AdminList
    
class IsTeacher(Filter):
    async def __call__(self, message: types.Message):
        temp = [i[0] for i in SQLite.readInfo(FilePath.people, "SELECT user_id FROM teacher") ]
        return message.from_user.id in temp

