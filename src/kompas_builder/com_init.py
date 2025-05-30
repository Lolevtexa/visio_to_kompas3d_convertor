import pythoncom
from win32com.client import Dispatch

def init_kompas5():
    pythoncom.CoInitialize()
    app5 = Dispatch("Kompas.Application.5")
    app5.Visible = False
    return app5

def init_kompas7():
    pythoncom.CoInitialize()
    app7 = Dispatch("Kompas.Application.7")
    app7.Visible = False
    return app7.Application
