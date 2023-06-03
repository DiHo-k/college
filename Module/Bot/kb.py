from aiogram.types import InlineKeyboardButton, InlineKeyboardMarkup, KeyboardButton, ReplyKeyboardMarkup, ReplyKeyboardRemove

admin_panel = [
    [KeyboardButton(text="Створити викладача"), KeyboardButton(text="Відправити повідомлення")],
]
admin_panel = ReplyKeyboardMarkup(keyboard=admin_panel, resize_keyboard=True)

teacher_panel = [
    [KeyboardButton(text="Надіслати повідомлення групі"), KeyboardButton(text="Відправити домашнє завдання")]
]

teacher_panel = ReplyKeyboardMarkup(keyboard=teacher_panel, resize_keyboard=True)

admin_send_notification = [
    [KeyboardButton(text="Всім"),KeyboardButton(text="Викладачам"),KeyboardButton(text="Студентам")]
]

admin_send_notification = ReplyKeyboardMarkup(keyboard=admin_send_notification,resize_keyboard=True)

