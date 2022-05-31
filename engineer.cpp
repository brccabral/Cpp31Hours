#include "person.h"
#include "engineer.h"
#include <iostream>

Engineer::Engineer()
{
    std::cout << "Default constructor for Engineer called..." << std::endl;
}

Engineer::Engineer(std::string_view fullname, int age,
                   std::string_view address, int contract_count_param) : Person(fullname, age, address), contract_count(contract_count_param)
{
    std::cout << "Custom constructor for Engineer called..." << std::endl;
}

// BAD design. Not calling all members, not calling Person constructor
/*
Engineer::Engineer(const Engineer& source)
     : contract_count(source.contract_count)
{
    std::cout << "Custom copy constructor for Engineer called..." << std::endl;
}
*/

// BAD design. Person() will be a temporary object, not using the copy constructor of Person
/*
Engineer::Engineer(const Engineer& source)
     : Person(source.m_full_name,source.m_age,source.get_address())
        , contract_count(source.contract_count)
{
    std::cout << "Custom copy constructor for Engineer called..." << std::endl;
}
*/

Engineer::Engineer(const Engineer &source)
    : Person(source), contract_count(source.contract_count)
{
    std::cout << "Custom copy constructor for Engineer called..." << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Engineer &operand)
{
    out << "Engineer [Full name : " << operand.get_full_name() << 
        ",age : " << operand.get_age() << 
        ",address : " << operand.get_address() << 
        ",contract_count : " << operand.contract_count << "]";
    return out;
}

Engineer::~Engineer()
{
}
