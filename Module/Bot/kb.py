from aiogram.types import InlineKeyboardButton, InlineKeyboardMarkup, KeyboardButton, ReplyKeyboardMarkup, ReplyKeyboardRemove

admin_panel = [
    [
        KeyboardButton(text="Відправити повідомлення"),
    ],
]
admin_panel = ReplyKeyboardMarkup(keyboard=admin_panel, resize_keyboard=True)

admin_send_notification = [[
    KeyboardButton(text="Відміна"),
]]

admin_send_notification = ReplyKeyboardMarkup(keyboard=admin_send_notification,
                                              resize_keyboard=True)

student_panel = [[
    KeyboardButton(text="Розклад"),
]]
student_panel = ReplyKeyboardMarkup(keyboard=student_panel,
                                    resize_keyboard=True)

cancel = [[KeyboardButton(text="Відміна")]]
cancel = ReplyKeyboardMarkup(keyboard=cancel, resize_keyboard=True)

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

matriculant_panel = [[KeyboardButton(text='Спеціальності')],
                     [
                         KeyboardButton(text='Перелік документів'),
                         KeyboardButton(text='Приклад документів')
                     ], [KeyboardButton(text='Прийом документів')],
                     [KeyboardButton(text='Результати прийому')],
                     [KeyboardButton(text="<< Назад")]]

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
], [KeyboardButton(text="< Назад")]]

profession_panel = ReplyKeyboardMarkup(keyboard=profession_panel,
                                       resize_keyboard=True)

choice_prof = [[
    KeyboardButton(text='АТ'),
    KeyboardButton(text='ЕТ'),
    KeyboardButton(text='ЕП'),
    KeyboardButton(text='КІ'),
    KeyboardButton(text='КН'),
    KeyboardButton(text='ТТ'),
    KeyboardButton(text='ГМ'),
], [KeyboardButton(text="Головне меню")]]

choice_prof = ReplyKeyboardMarkup(keyboard=choice_prof, resize_keyboard=True)