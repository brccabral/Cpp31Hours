#include <iostream>

int sum(int a, int b)
{
    int result = a + b;
    std::cout << "In : &result(int) :  " << &result << std::endl; // 0x6b0d7ff92c
    return result;
}

std::string add_strings(std::string str1, std::string str2)
{
    std::cout << "Param : &str1 :  " << &str1 << std::endl; // 0xf2dc3ff5e0
    std::cout << "Param : &str2 :  " << &str2 << std::endl; // 0xf2dc3ff5c0
    std::string result = str1 + str2;
    std::cout << "In : &result(std::string) :  " << &result << std::endl; // 0x6b0d7ff9e0
    return result;
}

int main()
{

    int x{15};
    int y{9};
    int result = sum(x, y);
    std::cout << "Out : &result(int) :  " << &result << std::endl; // 0x6b0d7ff92c - different address from function
    std::cout << "result : " << result << std::endl;               // 24

    std::string in_str1{"Hello"};
    std::string in_str2{" World!"};
    std::cout << "Main : &in_str1 :  " << &in_str1 << std::endl; // 0xf2dc3ff660 - different address from function
    std::cout << "Main : &in_str2 :  " << &in_str2 << std::endl; // 0xf2dc3ff628 - different address from function
    std::string result_str = add_strings(in_str1, in_str2);
    std::cout << "Out : &result_str(std::string) :  " << &result_str << std::endl; // 0x6b0d7ff9e0 - same address from function,
                                                                                   // the compiler did this optimization
    std::cout << "result_str : " << result_str << std::endl;

    return 0;
}