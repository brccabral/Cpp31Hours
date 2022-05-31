#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"

class Engineer : public Person
{
    using Person::Person; // Inheriting constructors
    friend std::ostream &operator<<(std::ostream &out, const Engineer &operand);

public:
    /*
    Engineer(); // don't need because we inherit from Person "using" above
    Engineer(const Engineer& source); // default copy constructor will be called from Engineer
    */
    Engineer(std::string_view fullname, int age,
             std::string_view address, int contract_count);
    ~Engineer();

    void build_something()
    {
        m_full_name = "John Snow"; // OK
        m_age = 23;                // OK
        // m_address = "897-78-723"; Compiler error
    }

    int get_contract_count() const
    {
        return contract_count;
    }

private:
    int contract_count{0};
};

#endif // ENGINEER_H
