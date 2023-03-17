#pragma once

#include <string>

class IObserver
{
public:
    virtual void Update(const std::string& message_from_subject) = 0;
};