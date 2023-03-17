#pragma once

#include <iostream>
#include <list>
#include <string>
#include "ISubject.h"

class Subject : public ISubject
{
    std::list<IObserver*> list_observer_;
    std::string message_;
public:
    void Attach(IObserver* observer) override
    {
        list_observer_.push_back(observer);
    }

    void Detach(IObserver* observer) override
    {
        list_observer_.remove(observer);
    }

    void Notify() override
    {
        for (IObserver*& observer : list_observer_)
        {
            observer->Update(message_);
            std::cout << message_ << std::endl;
        }
    }

    void CreateMessage(std::string message = "Empty") {
        this->message_ = message;
        Notify();
    }
};

