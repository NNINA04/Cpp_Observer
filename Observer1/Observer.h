#pragma once

#include "IObserver.h"
#include "Subject.h"

class Observer : public IObserver
{
    std::string message_from_subject_;
    Subject& subject_;
public:
    Observer(Subject& subject) : subject_(subject)
    {
        this->subject_.Attach(this);
    }

    void Update(const std::string& message_from_subject) override
    {
        message_from_subject_ = message_from_subject;
    }

    void RemoveMeFromTheList()
    {
        subject_.Detach(this);
        std::cout << "Some observer has been removed -" << std::endl;
    }
};