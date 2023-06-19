from aiogram.fsm.state import StatesGroup, State


class HomeWork(StatesGroup):
    task = State()
    group = State()
    branch = State()


class Teacher(StatesGroup):
    tc = State()


class Notification(StatesGroup):
    nf = State()


class NfForCurator(StatesGroup):
    nffc = State()


class Register(StatesGroup):
    stinf = State()
    