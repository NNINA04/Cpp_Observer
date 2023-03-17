#pragma once

#include <string>

class IIPhoneData
{
public:
    virtual const int& GetIPhonePrice() = 0;

    virtual const std::string& GetIPhoneName() = 0;
};