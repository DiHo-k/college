from aiogram import F, Router, types
from aiogram.filters import Command
from aiogram.types import Message
from aiogram import flags
from aiogram.fsm.context import FSMContext
from aiogram.fsm.state import State
from aiogram.methods import SendMessage, GetFile
import random
import string
from aiogram.utils.keyboard import ReplyKeyboardBuilder
from Module.Tools.states import *
import Module.Bot.kb as kb
from Module.Tools.filters import *
from aiogram.types.callback_query import CallbackQuery
from Module.Tools import SQLite
import Module.Tools.FilePath as FilePath

router = Router()
list_id = []
media = []

@router.message(Command("start"))
async def start(msg: Message):
    await msg.answer("Вітаю я бот Фахового коледжу транспорту на комп'ютерних технологій\n Зареєструватись як студент /register")

@router.message(Command("admin"),IsAdmin())
async def start_handler(msg: Message):
    await msg.answer(text="1",reply_markup=kb.admin_panel)
    
    
@router.message(F.text == "Створити викладача", IsAdmin())
async def create_teacher(msg: Message, state: FSMContext):
    await state.set_state(Teacher.tc)
    await msg.answer(text="Створення нового викладача по формі:\n ПІБ, група\n Приклад: Авраменко Михайло Костянтинович, kn1501")
    
@router.message(Teacher.tc)
async def process_teacher(msg: Message, state: FSMContext):
    await state.update_data(tc = msg.text)
    temp = msg.text.split(", ")
    Name = temp[0]
    own_group = temp[1]
    Key = "".join([random.choice(string.ascii_lowercase + string.digits if i != 5 else string.ascii_uppercase) for i in range(20)])
    SQLite.writeInfo(FilePath.people, f"INSERT INTO teacher (Name, Key, own_group) VALUES (?,?,?)", (Name, Key, own_group))
    await msg.answer(f"Викладач {Name} був успішно створений, для того щоб авторизуватись в боті йому потрібно надіслати `/login {Key}`",parse_mode="Markdown")
    await state.clear()
    
@router.message(Command("login"))
async def login(msg: Message):
    key = msg.text.split(" ")[1]
    usrid = msg.from_user.id
    temp = SQLite.readInfo(FilePath.people,f"SELECT * FROM teacher WHERE Key = '{key}'")
    print(temp)
    if temp[0][4] is None:
        await msg.answer(f"Вітаю {temp[0][1]}", reply_markup=kb.teacher_panel)
        SQLite.writeInfo(FilePath.people, f"UPDATE teacher set user_id = ? WHERE Key = ?", (usrid,key))
        SQLite.writeInfo(FilePath.people, f"UPDATE teacher set Key = ? WHERE Key = ?", (None,key))
    else:
        await msg.answer('Такий користувач вже активований')

@router.message(F.text == "Відправити повідомлення", IsAdmin())
async def AdmNotification(msg: Message):
    await msg.answer("Оберіть пункт у меню", reply_markup=kb.admin_send_notification)

@router.message(F.text == "Всім", IsAdmin())
async def sendNotificationAll(msg: Message, state: FSMContext):
    await state.set_state(Notification.nf)
    global list_id
    list_id = [_[0] for _ in SQLite.readInfo(FilePath.people, "SELECT user_id FROM teacher")] + [_[0] for _ in SQLite.readInfo(FilePath.people, "SELECT user_id FROM students")]

@router.message(F.text == "Викладачам", IsAdmin())
async def sendNotificationTeacher(msg: Message, state: FSMContext):
    await state.set_state(Notification.nf)
    global list_id
    list_id = [_[0] for _ in SQLite.readInfo(FilePath.people, "SELECT user_id FROM teacher")]
    
@router.message(F.text == "Студентам", IsAdmin())
async def sendNotificationStudents(msg: Message, state: FSMContext):
    await state.set_state(Notification.nf)
    global list_id
    list_id = [_[0] for _ in SQLite.readInfo(FilePath.people, "SELECT user_id FROM student")]

@router.message(F.text == "Відміна", IsAdmin())
async def AdminCancel(msg: Message, state: FSMContext):
    await msg.answer(text="Повернення до головного меню", reply_markup=kb.admin_panel)
    await state.clear()

@router.message(F.text == "Відміна", IsTeacher())
async def TeacherCancel(msg: Message, state: FSMContext):
    await msg.answer(text="Повернення до головного меню", reply_markup=kb.teacher_panel)
    await state.clear()
    
@router.message(F.text == "Відміна")
async def StudentCancel(msg: Message, state: FSMContext):
    await msg.answer(text="Повернення до головного меню", reply_markup=kb.student_panel)
    await state.clear()


@router.message(Notification.nf)
async def processNotifiacationAll(msg: Message, state: FSMContext):
    await state.update_data(nf = msg)
    global list_id
    await send_notification(msg, list_id)
    list_id.clear()
    await state.clear()

async def send_notification(mesg,lst):
    for _ in lst:
        try:
            await SendMessage(chat_id=_, text=mesg)
        except:
            pass

@router.message(Command("register"))
async def reg(msg: Message, state: FSMContext):
    await state.set_state(Register.stinf)
    await msg.answer(text="Форма реєстрації:\nПІБ, група\nПриклад: Авраменко Михайло Костянтинович, kn1501")

@router.message(Register.stinf)
async def get_stinf(msg: Message, state: FSMContext):
    await state.update_data(stinf = msg.text)
    temp = msg.text.split(", ")
    Name = temp[0]
    own_group = temp[1]
    usrid = msg.from_user.id
    SQLite.writeInfo(FilePath.people, f"INSERT INTO students (Name, user_id, own_group) VALUES (?,?,?)", (Name, usrid, own_group))
    await state.clear()
    await msg.answer(text=f"Вітаю {Name}",reply_markup=kb.student_panel)
    
@router.message(F.text == "Повідомлення куратору")
async def studentNF(msg: Message, state: FSMContext):
    await state.set_state(NfForCurator.nffc)
    await msg.answer(text="Напишіть повідомлення", reply_markup=kb.cancel)
    
@router.message(NfForCurator.nffc)
async def studentNFprocess(msg: Message, state: FSMContext):
    await state.update_data(nffc = msg.text)
    usrid = msg.from_user.id
    Name = SQLite.readInfo(FilePath.people, f"SELECT name FROM students WHERE user_id = {usrid}")[0][0]
    crgroup = SQLite.readInfo(FilePath.people, f"SELECT own_group FROM students WHERE user_id = {usrid}")[0][0]
    crid = SQLite.readInfo(FilePath.people, f"SELECT user_id FROM teacher WHERE own_group = '{crgroup}'")[0][0]
    await SendMessage(chat_id=crid, text=f"{msg.text} \n\n {Name}")
    
@router.message(Command("student"))
async def stpanel(msg: Message):
    await msg.answer("Вітаю", reply_markup=kb.student_panel)
    
@router.message(Command("teacher"))
async def stpanel(msg: Message):
    await msg.answer("Вітаю", reply_markup=kb.teacher_panel)
    
@router.message(F.text == "Відправити домашнє завдання", IsTeacher())
async def sendHomeWork(msg: Message, state: FSMContext):
    await state.set_state(HomeWork.branch)
    await msg.answer("Оберіть спеціальність", reply_markup=kb.branch_panel)

@router.message(HomeWork.branch)
async def sendHomeWork_getBranch(msg: Message, state: FSMContext):
    await state.update_data(bracnh = msg.text)
    await state.set_state(HomeWork.group)
    groups = [_[0] for _ in SQLite.readInfo(FilePath.people, f"SELECT DISTINCT own_group FROM students WHERE own_group LIKE '%{msg.text.lower()}%'")]
    builder = ReplyKeyboardBuilder()
    for i in groups:
        builder.add(types.KeyboardButton(text=str(i)))
    builder.adjust(4)
    await msg.answer("Оберіть групу", reply_markup=builder.as_markup(resize_keyboard=True))
    
@router.message(HomeWork.group)
async def sendHomeWork_getGroup(msg: Message, state: FSMContext):
    await state.update_data(group = msg.text)
    await state.set_state(HomeWork.task)
    await msg.answer(text="Надішліть домашнє завдання")

@router.message(HomeWork.task)
async def sendHomeWork_sendTask(msg: Message, state: FSMContext):
    # print(msg.document.file_id)
    global media
    media.append(msg.photo[0].file_id)
    
    print(media)
    # media.clear()
    pass

# @router.message()
# async def aasdaf(msg: Message):
#     print(msg.document.file_id)
#     temp = []
#     temp += str(msg.document.file_id)
#     print(temp)