#include <iostream>

void say_age(int *age); // Declaration

int main()
{

    int age{23};                                                                  // Local
    std::cout << "age (before call) : " << age << "&age : " << &age << std::endl; // 23 00EFF824
    say_age(&age);                                                                // Argument - pass the address
    std::cout << "age (after call) : " << age << "&age : " << &age << std::endl;  // 24 same address 00EFF824

    return 0;
}

void say_age(int *age)
{ // Parameter
    ++(*age);
    std::cout << "Hello , you are " << *age << " years old! &(*age) : " << &(*age) << " &age : " << &age << std::endl; // 24 - &(*age) original addresss 00EFF824, &age pointer address 00EFF800
}