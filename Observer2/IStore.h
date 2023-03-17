#pragma once

#include "ICustomer.h"

// Subject / Publisher
class IStore
{
public:
    virtual void Subscribe(ICustomer* customer) = 0;
    virtual void Unsubscribe(ICustomer* customer) = 0;
    virtual void NotifySubscribers() = 0;
};