import pythoncom
import win32com.client


def init_visio_app(visible: bool = False):
    """
    Initialize the COM subsystem and return a Visio Application instance.
    """
    pythoncom.CoInitialize()
    app = win32com.client.Dispatch("Visio.Application")
    app.Visible = visible
    return app


def close_visio_app(app):
    """
    Quit the given Visio Application instance.
    """
    app.Quit()