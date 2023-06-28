from aiogram import F, Router, types
from aiogram.filters import Command, Text
from aiogram.types import Message
from aiogram import flags
from aiogram.fsm.context import FSMContext
from aiogram.fsm.state import State
from aiogram.methods import SendMessage, GetFile
from aiogram.utils.keyboard import ReplyKeyboardBuilder
from Module.Tools.states import *
import Module.Bot.kb as kb
from Module.Tools.filters import *
from aiogram.types.callback_query import CallbackQuery
from Module.Tools import SQLite
import Module.Tools.FilePath as FilePath
from Module.Tools.text import *
from aiogram.enums import ChatType

router = Router()
list_id = []
media = []


@router.message(Command("start"), F.chat.type == ChatType.PRIVATE)
async def start(msg: Message):
    await msg.answer(welcome_message, reply_markup=kb.start_panel)
    try:
        SQLite.writeInfo(FilePath.people,
                         """INSERT INTO users (user_id,name) VALUES (?,?)""",
                         (msg.from_user.id, msg.from_user.first_name))
    except:
        pass


@router.message(Command("admin"), IsAdmin())
async def adminm(msg: Message):
    await msg.answer(text="1", reply_markup=kb.admin_panel)


@router.message(F.text == "Відправити повідомлення", IsAdmin())
async def AdmNotification(msg: Message, state: FSMContext):
    await state.set_state(Notification.nf)
    await msg.answer("Напишіть повідомлення")


@router.message(F.text == "Відміна", IsAdmin())
async def AdminCancel(msg: Message, state: FSMContext):
    await msg.answer(text="Повернення до головного меню",
                     reply_markup=kb.admin_panel)
    await state.clear()


@router.message(Notification.nf)
async def processNotifiacationAll(msg: Message, state: FSMContext):
    await state.update_data(nf=msg)
    temp = SQLite.readInfo(FilePath.people, """SELECT user_id from users""")
    print(temp)
    for i in temp:
        try:
            await SendMessage(chat_id=i[0], text=msg.text)
        except:
            pass
    await state.clear()


@router.message(F.text == "Розклад")
async def get_schedule(msg: Message, state: FSMContext):
    await state.set_state(grp.choicegrp)
    await msg.answer(text='Оберіть cпеціальність', reply_markup=kb.choice_prof)


@router.callback_query(Text("monday"))
async def monday(callback: CallbackQuery):
    usrid = callback.from_user.id
    grp = SQLite.readInfo(
        FilePath.people,
        f"SELECT own_group FROM users WHERE user_id = '{usrid}'")[0][0]
    sc = SQLite.readInfo(FilePath.schedule,
                         f"SELECT Понеділок FROM {grp}")[0][0]
    await callback.answer(text=str(sc), show_alert=True)


@router.callback_query(Text("tuesday"))
async def tuesday(callback: CallbackQuery):
    usrid = callback.from_user.id
    grp = SQLite.readInfo(
        FilePath.people,
        f"SELECT own_group FROM users WHERE user_id = '{usrid}'")[0][0]
    sc = SQLite.readInfo(FilePath.schedule,
                         f"SELECT Вівторок FROM {grp}")[0][0]
    await callback.answer(text=str(sc), show_alert=True)


@router.callback_query(Text("wednesday"))
async def wednesday(callback: CallbackQuery):
    usrid = callback.from_user.id
    grp = SQLite.readInfo(
        FilePath.people,
        f"SELECT own_group FROM users WHERE user_id = '{usrid}'")[0][0]
    sc = SQLite.readInfo(FilePath.schedule, f"SELECT Середа FROM {grp}")[0][0]
    await callback.answer(text=str(sc), show_alert=True)


@router.callback_query(Text("thursday"))
async def thursday(callback: CallbackQuery):
    usrid = callback.from_user.id
    grp = SQLite.readInfo(
        FilePath.people,
        f"SELECT own_group FROM users WHERE user_id = '{usrid}'")[0][0]
    sc = SQLite.readInfo(FilePath.schedule, f"SELECT Четвер FROM {grp}")[0][0]
    await callback.answer(text=str(sc), show_alert=True)


@router.callback_query(Text("friday"))
async def friday(callback: CallbackQuery):
    usrid = callback.from_user.id
    grp = SQLite.readInfo(
        FilePath.people,
        f"SELECT own_group FROM users WHERE user_id = '{usrid}'")[0][0]
    sc = SQLite.readInfo(FilePath.schedule, f"SELECT Пятниця FROM {grp}")[0][0]
    await callback.answer(text=str(sc), show_alert=True)


@router.message(F.text == 'Вступникам')
async def matriculant(msg: Message):
    await msg.answer("Оберіть пункт меню", reply_markup=kb.matriculant_panel)


@router.message(F.text == 'Спеціальності')
async def profession(msg: Message):
    await msg.answer("Оберіть спеціальність", reply_markup=kb.profession_panel)


@router.message(
    F.text.in_({
        'АТ - 274', 'ЕТ - 141', 'ЕП - 051', 'КІ - 123', 'КН - 122', 'ТТ - 275',
        'ГМ - 133'
    }))
async def choiceProf(msg: Message):
    match msg.text:
        case 'АТ - 274':
            await msg.answer(prof_at)
            await msg.answer(info_at)
        case 'ЕТ - 141':
            await msg.answer(prof_et)
            await msg.answer(info_et)
        case 'ЕП - 051':
            await msg.answer(prof_ep)
            await msg.answer(info_ep)
        case 'КІ - 123':
            await msg.answer(prof_ki)
            await msg.answer(info_ki)
        case 'КН - 122':
            await msg.answer(prof_kn)
            await msg.answer(info_kn)
        case 'ТТ - 275':
            await msg.answer(prof_tt)
            await msg.answer(info_tt)
        case 'ГМ - 133':
            await msg.answer(prof_gm)
            await msg.answer(info_gm)


@router.message(F.text == "Перелік документів")
async def doclist(msg: Message):
    await msg.answer(documents_list)
    await msg.answer(warn, parse_mode="MarkdownV2")


@router.message(F.text == "Прийом документів")
async def getdocs(msg: Message):
    await msg.answer(docs9, parse_mode="MarkdownV2")


@router.message(F.text == "Результати прийому")
async def send_result(msg: Message):
    await msg.answer(result1, parse_mode="MarkdownV2")
    await msg.answer(result2, parse_mode="MarkdownV2")
    await msg.answer(result3, parse_mode="MarkdownV2")


@router.message(F.text == "< Назад")
async def nz(msg: Message):
    await msg.answer("Повернення", reply_markup=kb.matriculant_panel)


@router.message(F.text == "<< Назад")
async def nz1(msg: Message):
    await msg.answer("Повернення", reply_markup=kb.start_panel)


@router.message(F.text == "Абітурієнтам")
async def abi(msg: Message):
    await msg.answer(text="Оберіть cпецiальнiсть", reply_markup=kb.choice_prof)


@router.message(F.text.in_({'АТ', 'ЕТ', 'ЕП', 'КІ', 'КН', 'ТТ', 'ГМ'}))
async def getgr(msg: Message, state: FSMContext):
    await state.set_state(grp.choicegrp)
    builder = ReplyKeyboardBuilder()
    temp = twentyfive(msg.text)
    for i in temp:
        builder.add(types.KeyboardButton(text=str(i)))
    builder.adjust(4)
    builder.row(types.KeyboardButton(text="Головне меню"))
    await msg.answer("Оберіть групу",
                     reply_markup=builder.as_markup(resize_keyboard=True))


@router.message(grp.choicegrp)
async def chgrp(msg: Message, state: FSMContext):
    await state.update_data(choicegrp=msg.text)
    SQLite.writeInfo(FilePath.people,
                     f"""UPDATE users SET own_group = ? WHERE user_id = ?""",
                     (msg.text, msg.from_user.id))
    await msg.answer("Оберіть день тижня", reply_markup=kb.schedule_panel)
    await msg.answer(
        "Повернення до головного меню\n(Для того щоб знов подивитися розклад достатньо відправити /schedule)",
        reply_markup=kb.start_panel)
    await state.clear()


def twentyfive(val):
    res = SQLite.readInfo(
        FilePath.schedule, """select * from sqlite_master
            where type = 'table'""")
    temp = list()
    for i in res:
        if val in i[1]:
            temp.append(i[1])
    return temp


@router.message(F.text == "Головне меню")
async def rettostrt(msg: Message):
    await msg.answer("Повернення до головного меню",
                     reply_markup=kb.start_panel)


@router.message(F.text == "Приклад документів")
async def sendExampledoc(msg: Message):
    await msg.answer_photo(
        photo=types.FSInputFile("photos/svidotstvo.jpg"),
        caption="Приклад документу про здобутий освітній рівень")
    await msg.answer_photo(photo=types.FSInputFile("photos/passport.jpg"),
                           caption="Приклад пасспорту")
    await msg.answer_photo(photo=types.FSInputFile("photos/inn.png"),
                           caption="Приклад ідентифікаційного коду")
    await msg.answer_photo(photo=types.FSInputFile("photos/viys.png"),
                           caption="Приклад військово облікових документів")
    await msg.answer_photo(photo=types.FSInputFile("photos/zno.jpg"),
                           caption="Приклад сертифікату зно")
    await msg.answer_photo(photo=types.FSInputFile("photos/forma_086-1.jpg"),
                           caption="Приклад форми 086-1/o ")
    await msg.answer_photo(photo=types.FSInputFile("photos/forma-063-o.jpg"),
                           caption="Приклад форми 063/o")


@router.message(Command("schedule"))
async def getsch(msg: Message):
    val = SQLite.readInfo(
        FilePath.people,
        f"SELECT own_group from users WHERE user_id == {msg.from_user.id}")
    twentyfive(val[0][0])
    await msg.answer("Оберіть день тижня", reply_markup=kb.schedule_panel)
