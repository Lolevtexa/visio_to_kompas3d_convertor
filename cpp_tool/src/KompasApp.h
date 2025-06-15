#pragma once
#include "Ks_TLB.h"
#include <comdef.h>
#include <windows.h>


class KompasApp {
private:
  KompasObjectPtr kompas;

public:
  KompasApp();
  ~KompasApp();

  /// Возвращает DocumentParamPtr для кода параметров (ksDocumentParam,
  /// ksRectangleParam и т.п.)
  DocumentParamPtr getParamStruct(long code);

  /// Возвращает указатель на 2D-документ
  Document2DPtr getDocument2D();
};
