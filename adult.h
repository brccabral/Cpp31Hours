#ifndef PARENT_H
#define PARENT_H

#include <iostream>
class Adult
{
public:
    Adult() = default;
    Adult(int member_var) : m_member_var(member_var)
    {
    }
    ~Adult() = default;

    void print_var() const
    {
        std::cout << "The value in adult is : " << m_member_var << std::endl;
    }

    int m_member_var{100};
};

#endif // PARENT_H
