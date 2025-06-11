#include "Document2D.h"
#include <iostream>

Document2D::Document2D(KompasSDK& /*sdk*/, int sheetType) {
    ksDocumentParam p;
    ksGetParamStruct(ksDocumentParam, &p);
    p.Init();
    p.type = sheetType;
    _hDoc = ksCreateDocument(&p);
}

Document2D::~Document2D() {
    if (_hDoc) {
        ksCloseDocument(_hDoc);
    }
}

bool Document2D::isValid() const {
    return _hDoc != nullptr;
}

bool Document2D::openSheet(int idx) {
    if (!_hDoc) return false;
    ksOpenSheet(_hDoc, idx);
    return true;
}

void Document2D::line(double x1, double y1, double x2, double y2, int style) {
    if (_hDoc) ksLineSeg(_hDoc, x1, y1, x2, y2, style);
}

void Document2D::rectangle(double x, double y, double w, double h,
                           double angle, int centerFlag, int style) {
    if (!_hDoc) return;
    ksRectangleParam p;
    ksGetParamStruct(ksRectangleParam, &p);
    p.Init();
    p.x = x; p.y = y;
    p.width = w; p.height = h;
    p.ang = angle; p.style = style;
    ksRectangle(_hDoc, &p, centerFlag);
}

void Document2D::circle(double x, double y, double r, int style) {
    if (_hDoc) ksCircle(_hDoc, x, y, r, style);
}

void Document2D::text(double x, double y, const std::string& txt,
                      double height, double angle, double interval, int style) {
    if (!_hDoc) return;
    ksTextParam p;
    ksGetParamStruct(ksTextParam, &p);
    p.Init();
    p.x = x; p.y = y;
    p.height = height; p.angle = angle;
    p.interval = interval; p.style = style;
    ksText(_hDoc, &p, txt.c_str());
}

bool Document2D::saveAndClose(const std::string& path) {
    if (!_hDoc) return false;
    bool ok = ksSaveDocument(_hDoc, path.c_str());
    ksCloseDocument(_hDoc);
    _hDoc = nullptr;
    return ok;
}