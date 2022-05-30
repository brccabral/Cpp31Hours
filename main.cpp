#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main()
{

    CivilEngineer ce1;
    /*
    Will call all inherited classes constructors

    Default constructor for Person called...
    Default constructor for Engineer called...
    Default constructor called for CivilEnginner ...
    */

    return 0;
}