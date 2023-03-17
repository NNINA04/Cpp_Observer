#pragma once

#include <iostream>
#include "ICustomer.h"
#include "IIPhoneData.h"
#include "IDisplayInfo.h"

class Customer1 : public ICustomer, public IDisplayInfo
{
    IIPhoneData* _iPhoneData;

    int _iPhonePrice{};
    std::string _iPhoneName{};
public:
    Customer1(IIPhoneData* iPhoneData)
    {
        _iPhoneData = iPhoneData;
    }

    // Inherited via ICustomer
    virtual void Update() override
    {
        _iPhonePrice = _iPhoneData->GetIPhonePrice();
        _iPhoneName = _iPhoneData->GetIPhoneName();
    }

    virtual void DisplayInfo()
    {
        std::cout << "New IPhone name is <" << _iPhoneName <<
            "> and its price equal " << _iPhonePrice << " euro" << std::endl;
    }
};