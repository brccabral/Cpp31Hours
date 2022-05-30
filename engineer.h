#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"

// Engineer is doing private inheritance, but with "using" we can
//  "resurrect" members from base class and avoid them to become private
//  private in base will remain private
//  protected cannot be public, but can be protected again
//  public from base can be anything

class Engineer : private Person // inheritance is private
{
    friend std::ostream &operator<<(std::ostream &out, const Engineer &operand);

public:
    Engineer();
    ~Engineer();

    void build_something()
    {
        m_full_name = "John Snow"; // OK
        m_age = 23;                // OK
        // m_address = "897-78-723"; Compiler error
    }

public:
    using Person::add; // add is public in Person

protected:
    using Person::get_address; // these are protected in Person, can't make public
    using Person::get_age;
    using Person::get_full_name;
    // using Person::m_address; // Compiler error, address is private, can't make protected

    int get_contract_count() const
    {
        return contract_count;
    }

private:
    int contract_count{0};
};

#endif // ENGINEER_H
