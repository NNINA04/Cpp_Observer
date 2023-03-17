#pragma once

#include <list>
#include <string>
#include "IStore.h"
#include "IIPhoneData.h"

class AppleStore : public IStore, public IIPhoneData
{
    std::list<ICustomer*> _customers{};

    int _iPhonePrice{};
    std::string _iPhoneName{};
public:
    void Update(int iPhonePrice, std::string iPhoneName)
    {
        _iPhonePrice = iPhonePrice;
        _iPhoneName = iPhoneName;
    }

    // Inherited via IStore
    virtual void Subscribe(ICustomer* customer) override
    {
        _customers.push_back(customer);
    }

    virtual void Unsubscribe(ICustomer* customer) override
    {
        _customers.remove(customer);
    }

    virtual void NotifySubscribers() override
    {
        for (ICustomer*& customer : _customers)
            customer->Update();
    }

    // Inherited via IIPhoneData
    virtual const int& GetIPhonePrice() override
    {
        return _iPhonePrice;
    }

    virtual const std::string& GetIPhoneName() override
    {
        return _iPhoneName;
    }
};