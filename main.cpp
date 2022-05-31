#include <iostream>
#include "dog.h"

int main()
{

    Animal *p_animal = new Dog;

    delete p_animal;

    /*
    If destructors are not virtual, only Animal destructor will be called if we are using polymorphism
    Animal destructor called

    If we add virtual to the destructors, all derived classes are going to call their destructor
    Dog destructor called
    Feline destructor called
    Animal destructor called
    */

    Dog d1; // without polymorphism all destructors are called as expected

    return 0;
}