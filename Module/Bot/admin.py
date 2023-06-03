from aiogram.types import InlineKeyboardButton, InlineKeyboardMarkup, KeyboardButton, ReplyKeyboardMarkup, ReplyKeyboardRemove

admin_panel = [
    [KeyboardButton(text="Створити викладача"), KeyboardButton(text="Відправити повідомлення")],
]
admin_panel = ReplyKeyboardMarkup(keyboard=admin_panel, resize_keyboard=True)