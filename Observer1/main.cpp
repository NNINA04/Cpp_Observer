#include <iostream>
#include "Subject.h"
#include "Observer.h"

/*
    Current Subject doesn't have get methods for observers.
    -> One to many
*/
int main() 
{
    Subject* subject = new Subject;

    Observer observer1(*subject);
    Observer observer2(*subject);

    subject->CreateMessage(">> Hello World!");
    observer2.RemoveMeFromTheList();
    subject->CreateMessage(">> The weather is hot today!");
    subject->CreateMessage(">> My new car is great!");
}