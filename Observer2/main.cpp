#include <iostream>
#include "AppleStore.h"
#include "Customer1.h"

/*
    This is my own code that can be incorrect and it was written by my improvization.
    It means that most of all it isn't a Decorator

    Current Subject (AppleStore) has get methods for observers.
    -> Many to one
*/
int main()
{
    AppleStore store;
    store.Update(1250, "IPhone IXX");

    Customer1 c1(&store);
    store.Subscribe(&c1);
    c1.DisplayInfo();
    
    store.NotifySubscribers();
    c1.DisplayInfo();
}