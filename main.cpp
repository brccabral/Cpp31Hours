#include <iostream>
#include "child.h"

int main()
{
    Child child(33);
    child.print_var();        // Calls the method in Child // The value in child is : 33
    child.Adult::print_var(); // Calls the method in Adult, // The value in adult is : 100
                              // value in adult just contains junk or whatever
                              // in class initialization we did.

    std::cout << "--------" << std::endl;
    child.show_values(); // The value in child is :33
                         // The value in adult is : 100

    return 0;
}