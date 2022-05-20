#include <iostream>

int main()
{
    // sum "shor int" or "char" change the sizeof, they change to 4 bytes
    // when initially was 2 and 1

    short int var1{10}; // 2 bytes
    short int var2{20};

    char var3{40}; // 1 bytes
    char var4{50};

    std::cout << "size of var1 : " << sizeof(var1) << std::endl;
    std::cout << "size of var2 : " << sizeof(var2) << std::endl;
    std::cout << "size of var3 : " << sizeof(var3) << std::endl;
    std::cout << "size of var4 : " << sizeof(var4) << std::endl;

    auto result1 = var1 + var2; // 4 bytes
    auto result2 = var3 + var4; // 4 bytes

    std::cout << "size of result1 : " << sizeof(result1) << std::endl; // 4 bytes
    std::cout << "size of result2 : " << sizeof(result2) << std::endl; // 4 bytes

    // the results are calculated as int and they present the correct math result
    std::cout << "result1 : " << result1 << std::endl; // 30
    std::cout << "result2 : " << result2 << std::endl; // 90

    return 0;
}