#include "KompasSDK.h"
#include "KompasAPI.h"

KompasSDK::KompasSDK(const std::string& sdkPath) {
    // инициализируем библиотеку из папки SDK/Bin
    _initialized = ksInitAPI(sdkPath.c_str());
}

KompasSDK::~KompasSDK() {
    if (_initialized) 
        ksFinishAPI();
}

bool KompasSDK::initialized() const {
    return _initialized;
}