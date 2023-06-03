from aiogram.fsm.state import StatesGroup, State

class HomeWork(StatesGroup):
    task = State()
    
class Teacher(StatesGroup):
    tc = State()
    
class Notification(StatesGroup):
    nf = State()