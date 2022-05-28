#include <iostream>

// Declaration by reference
// use "const" just to avoid changing value in function
template <typename T>
const T &maximum(const T &a, const T &b);

// Declaration by value
template <typename T>
T maximum_by_value(T a, T b);

int main()
{

    double a{23.5};
    double b{51.2};

    std::cout << "Out - &a: " << &a << std::endl; // 0xb4697ffce0
    auto result_by_value = maximum_by_value(a, b);

    std::cout << "Out - &a: " << &a << std::endl; // 0xb4697ffce0
    auto result = maximum(a, b);

    return 0;
}

// Definition by value
template <typename T>
const T &maximum(const T &a, const T &b)
{
    std::cout << "In ref - &a: " << &a << std::endl; // 0xb4697ffce0 - same as out
    return (a > b) ? a : b;
}

// Definition by reference
template <typename T>
T maximum_by_value(T a, T b)
{
    std::cout << "In value - &a: " << &a << std::endl; // 0xb4697ffc90 - different from out
    return (a > b) ? a : b;
}
