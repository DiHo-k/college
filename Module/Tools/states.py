from aiogram.fsm.state import StatesGroup, State


class grp(StatesGroup):
    choicegrp = State()


class Notification(StatesGroup):
    nf = State()
