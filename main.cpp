#include <iostream>

void say_age(int age)
{ // Parameter
    ++age;
    std::cout << "Hello , you are " << age << " years old! &age : " << &age << std::endl; // difference address
}

int main()
{

    int age{23};                                                                  // Local
    std::cout << "age (before call) : " << age << "&age : " << &age << std::endl; // 23 010FF9CC
    say_age(age);                                                                 // Argument - difference address - 24 010FF9A8
    std::cout << "age (after call) : " << age << "&age : " << &age << std::endl;  // 23 010FF9CC

    return 0;
}