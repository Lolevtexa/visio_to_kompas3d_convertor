import pythoncom
from win32com.client import DispatchEx

class KompasApp:
    def __init__(self):
        pythoncom.CoInitialize()
        self.app5 = DispatchEx("Kompas.Application.5")
        self.app5.Visible = False

    def get_param_struct(self, code):
        return self.app5.GetParamStruct(code)

    def quit(self):
        pass
        try:
            self.app5.Quit()
        except Exception:
            pass
        finally:
            del self.app5
            pythoncom.CoUninitialize()