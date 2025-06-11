#pragma once
#include <string>

class KompasSDK {
public:
    explicit KompasSDK(const std::string& sdkPath);
    ~KompasSDK();

    bool initialized() const;

private:
    bool _initialized = false;
};