#include "person.h"

// double weight{}; // linking error = error LNK2005: "double weight" (?weight@@3NA) already defined in main.obj

// linker error = error LNK2005: "double __cdecl add(double,double)" (?add@@YANNN@Z) already defined in main.obj
// double add(double a, double b)
// {
//     return a + b;
// }

// it is allowed because it is in another translation unit
struct Point
{
    double x{};
    double y{};
};

int Person::person_count = 8;
Person::Person(const std::string &names_param, int age_param)
    : full_name{names_param}, age{age_param}
{
    ++person_count;
}

// compile error = error C2011: 'Person': 'class' type redefinition
// it is in the same translation unit because we are "include person.h"
// class Person
// {
// };