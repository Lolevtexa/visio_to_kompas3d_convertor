#include "KompasApp.h"

KompasApp::KompasApp() {
  // Инициализация COM
  CoInitialize(nullptr);

  // Создаём COM-объект "Kompas.Application.5"
  kompas.CreateInstance(L"KOMPAS.Application.5");
  kompas->Visible = VARIANT_FALSE; // скрыть GUI
}

KompasApp::~KompasApp() {
  kompas->Quit();
  CoUninitialize();
}

DocumentParamPtr KompasApp::getParamStruct(long code) {
  // GetParamStruct возвращает IDispatch*, приводим к DocumentParamPtr
  return (DocumentParamPtr)kompas->GetParamStruct(code);
}

Document2DPtr KompasApp::getDocument2D() { return kompas->Document2D(); }
