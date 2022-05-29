#include <iostream>
#include <concepts>

// Concepts are only C++20 or later
//  restrict function parameter types for function templates

// Syntax1
template <typename T>
requires std::integral<T>
    T add1(T a, T b)
{
    return a + b;
}

// Syntax2
template <std::integral T>
T add2(T a, T b)
{
    return a + b;
}

// Syntax3
auto add3(std::integral auto a, std::integral auto b)
{
    return a + b;
}

// Syntax4
template <typename T>
T add4(T a, T b) requires std::integral<T>
{
    return a + b;
}

int main()
{

    char a_0{10};
    char a_1{20};

    auto result_a = add1(a_0, a_1);
    std::cout << "result_a : " << static_cast<int>(result_a) << std::endl;

    int b_0{11};
    int b_1{5};
    auto result_b = add2(b_0, b_1);
    std::cout << "result_b : " << result_b << std::endl;

    double c_0{11.1};
    double c_1{1.9};
    // auto result_c = add3(c_0,c_1); // error, params are double, func requires int
    // std::cout << "result_c : " << result_c << std::endl;

    int d_0{33};
    int d_1{42};
    auto result_d = add3(d_0, d_1);
    std::cout << "result_d : " << result_d << std::endl;

    int e_0{33};
    int e_1{42};
    auto result_e = add4(e_0, e_1);
    std::cout << "result_e : " << result_e << std::endl;

    return 0;
}