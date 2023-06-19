from aiogram.types import InlineKeyboardButton, InlineKeyboardMarkup, KeyboardButton, ReplyKeyboardMarkup, ReplyKeyboardRemove

admin_panel = [
    [
        KeyboardButton(text="Створити викладача"),
        KeyboardButton(text="Відправити повідомлення"),
    ],
]
admin_panel = ReplyKeyboardMarkup(keyboard=admin_panel, resize_keyboard=True)

teacher_panel = [[
    KeyboardButton(text="Надіслати повідомлення групі"),
    KeyboardButton(text="Відправити домашнє завдання"),
]]

teacher_panel = ReplyKeyboardMarkup(keyboard=teacher_panel,
                                    resize_keyboard=True)

admin_send_notification = [[
    KeyboardButton(text="Всім"),
    KeyboardButton(text="Викладачам"),
    KeyboardButton(text="Студентам"),
    KeyboardButton(text="Відміна"),
]]

admin_send_notification = ReplyKeyboardMarkup(keyboard=admin_send_notification,
                                              resize_keyboard=True)

student_panel = [[
    KeyboardButton(text="Розклад"),
    KeyboardButton(text="Повідомлення куратору"),
]]
student_panel = ReplyKeyboardMarkup(keyboard=student_panel,
                                    resize_keyboard=True)

cancel = [[KeyboardButton(text="Відміна")]]
cancel = ReplyKeyboardMarkup(keyboard=cancel, resize_keyboard=True)

branch_panel = [[
    KeyboardButton(text='KN'),
    KeyboardButton(text="KI"),
    KeyboardButton(text='ET'),
]]
branch_panel = ReplyKeyboardMarkup(keyboard=branch_panel, resize_keyboard=True)

schedule_panel = [[
    InlineKeyboardButton(text="Понеділок", callback_data="monday"),
    InlineKeyboardButton(text="Вівторок", callback_data="tuesday"),
    InlineKeyboardButton(text="Середа", callback_data="wednesday"),
    InlineKeyboardButton(text="Четвер", callback_data="thursday"),
    InlineKeyboardButton(text="П'ятниця", callback_data="friday"),
]]
schedule_panel = InlineKeyboardMarkup(inline_keyboard=schedule_panel)

start_panel = [[
    KeyboardButton(text='Вступникам'),
    KeyboardButton(text='Абітурієнтам'),
]]
start_panel = ReplyKeyboardMarkup(keyboard=start_panel, resize_keyboard=True)

matriculant_panel = [[
    KeyboardButton(text='Спеціальності'),
    KeyboardButton(text='Перелік документів'),
    KeyboardButton(text='Прийом документів'),
    KeyboardButton(text='Результати прийому'),
]]

matriculant_panel = ReplyKeyboardMarkup(keyboard=matriculant_panel,
                                        resize_keyboard=True)

profession_panel = [[
    KeyboardButton(text='АТ - 274'),
    KeyboardButton(text='ЕТ - 141'),
    KeyboardButton(text='ЕП - 051'),
    KeyboardButton(text='КІ - 123'),
    KeyboardButton(text='КН - 122'),
    KeyboardButton(text='ТТ - 275'),
    KeyboardButton(text='ГМ - 133'),
]]

profession_panel = ReplyKeyboardMarkup(keyboard=profession_panel,
                                       resize_keyboard=True)
