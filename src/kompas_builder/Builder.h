#pragma once
#include <string>
#include "KompasSDK.h"
#include "Document2D.h"

class Builder {
public:
    // sdkPath: путь к папке SDK (где лежат DLL/Bin)
    explicit Builder(const std::string& sdkPath);

    // возвращает true при успехе
    bool build(const std::string& inputJson, const std::string& outputCdw);

private:
    double sheetW = 420.0, sheetH = 297.0, margin = 10.0;
    KompasSDK   sdk;
    Document2D  doc;
};