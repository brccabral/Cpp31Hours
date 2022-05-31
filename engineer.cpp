#include "person.h"
#include "engineer.h"
#include <iostream>

/*
Engineer(); // don't need because we inherit from Person "using" above
Engineer(const Engineer& source); // default copy constructor will be called from Engineer
*/

Engineer::Engineer(std::string_view fullname, int age,
                   std::string_view address, int contract_count_param) : Person(fullname, age, address), contract_count(contract_count_param)
{
    std::cout << "Custom constructor for Engineer called..." << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Engineer &operand)
{
    out << "Engineer [Full name : " << operand.get_full_name() << ",age : " << operand.get_age() << ",address : " << operand.get_address() << ",contract_count : " << operand.contract_count << "]";
    return out;
}

Engineer::~Engineer()
{
}
