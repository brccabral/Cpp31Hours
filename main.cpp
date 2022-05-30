#include <iostream>
#include "cylinder.h"

int main()
{

    Cylinder cylinder1(10, 10);
    std::cout << "volume : " << cylinder1.volume() << std::endl;

    // Managing a stack object through pointers
    Cylinder *p_cylinder1 = &cylinder1;

    std::cout << "*p_cylinder1.volume : " << (*p_cylinder1).volume() << std::endl; // to use dot notation, need to dereference with *
    std::cout << "p_cylinder1->volume : " << p_cylinder1->volume() << std::endl;   // if not dereference, use arrow notation ->

    // Create a cylinder heap object through the new operator
    Cylinder *p_cylinder2 = new Cylinder(100, 2); // Heap (new keyword, remember to delete)

    std::cout << "*p_cylinder2.volume() : " << (*p_cylinder2).volume() << std::endl;
    std::cout << "p_cylinder2->get_base_radius() : " << p_cylinder2->get_base_radius() << std::endl;
    delete p_cylinder2;

    return 0;
}