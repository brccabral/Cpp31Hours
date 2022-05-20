#include <iostream>

int main()
{
    const size_t COUNT{100};

    for (size_t i{0}; i < COUNT; i++)
    {
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    std::cout << "sizeof(size_t) : " << sizeof(size_t) << std::endl; // 8 bytes
    // std::cout << "i : " << i << std::endl;                           // Compiler error : i is not in scope

    size_t j{0}; // Iterator defined outside

    // for (j ; j < COUNT; ++j)
    for (; j < COUNT; ++j)
    {
        std::cout << j << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    std::cout << "j : " << j << std::endl;

    return 0;
}