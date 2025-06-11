import pythoncom
from win32com.client import Dispatch

class KompasApp:
    def __init__(self):
        pythoncom.CoInitialize()
        self.app5 = Dispatch("Kompas.Application.5")
        self.app5.Visible = False

    def get_param_struct(self, code):
        return self.app5.GetParamStruct(code)

    def quit(self):
        self.app5.Quit()
        del self.app5
        pythoncom.CoUninitialize()