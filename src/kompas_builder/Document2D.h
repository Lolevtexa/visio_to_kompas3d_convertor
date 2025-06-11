#pragma once
#include <string>
#include "KompasAPI.h"
#include "ksConstants.h"
#include "KompasSDK.h"

class Document2D {
public:
    // sheetType: ksA3, ksA4 и т.п.
    Document2D(KompasSDK& sdk, int sheetType = ksA3);
    ~Document2D();

    bool isValid() const;
    bool openSheet(int index);

    void line(double x1, double y1, double x2, double y2, int style = 1);
    void rectangle(double x, double y, double w, double h,
                   double angle = 0.0, int centerFlag = 0, int style = 1);
    void circle(double x, double y, double radius, int style = 1);
    void text(double x, double y, const std::string& txt,
              double height = 5.0, double angle = 0.0,
              double interval = 1.0, int style = 0);

    bool saveAndClose(const std::string& path);

private:
    HDocument2D _hDoc = nullptr;
};