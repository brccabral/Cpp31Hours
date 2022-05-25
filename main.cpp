#include <iostream>
#include "person.h"

// Variable : Declaration and definition
double weight{};
// double weight{}; // compile error = error C2374: 'weight': redefinition; multiple initialization

double add(double a, double b);

struct Point
{
    double m_x{};
    double m_y{};
};

// error C2011: 'Point': 'struct' type redefinition
// it is NOT allowed because it is in same translation unit
//  struct Point
//  {
//      double m_x{};
//      double m_y{};
//  };

// linker error = fatal error LNK1169: one or more multiply defined symbols found
// it is already defined in some_other_file.cpp
// int Person::person_count = 8;
// Person::Person(const std::string &names_param, int age_param)
//     : full_name{names_param}, age{age_param}
// {
//     ++person_count;
// }

int main()
{
    std::cout << weight << std::endl; // 0

    double result = add(10, 20);
    std::cout << result << std::endl; // 30

    Point p1;
    std::cout << "p1.m_x : " << p1.m_x << std::endl; // p1.m_x : 0

    Person p2("John Snow", 35);
    p2.print_info(); // name : John Snow , age : 35

    return 0;
}

double add(double a, double b)
{
    return a + b;
}

// compile error = error C2084: function 'double add(double,double)' already has a body
// double add(double a, double b)
// {
//     return a + b;
// }