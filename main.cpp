#include <iostream>
#include <type_traits>
#include <concepts>

// Syntax1

template <typename T>
concept MyIntegral = std::is_integral_v<T>;

MyIntegral auto add1(MyIntegral auto a, MyIntegral auto b)
{
    return a + b;
}

template <typename T>
concept Multipliable = requires(T a, T b)
{
    a * b; // Just makes sure the syntax is valid
};

template <typename T>
requires Multipliable<T>
    T mult1(T a, T b)
{
    return a * b;
}

template <typename T>
concept Incrementable = requires(T a)
{
    a += 1;
    ++a;
    a++;
};

template <typename T>
requires Incrementable<T>
    T add2(T a, T b)
{
    return a + b;
}

// Syntax 3
template <MyIntegral T>
T add3(T a, T b)
{
    return a + b;
}

// Syntax 4
MyIntegral auto add4(MyIntegral auto a, MyIntegral auto b)
{
    return a + b;
}

int main()
{

    double x{6.3};
    double y{7.4};
    // add1(x, y); // error, params are not MyIntegral
    add2(x, y);  // works because double is Incrementable
    mult1(x, y); // works because double is Multipliable

    int a{1};
    int b{2};
    add1(a, b);

    int c{0};
    int d{5};
    add2(c, d);

    std::string h{"Hello"};
    std::string w{"World"};
    // add1(h, w); // error, params are not MyIntegral
    // add2(h, w); // error, params are not Incrementable
    // mult1(h, w); // error, params are not Multipliable

    int e{7};
    int f{2};
    add3(e, f);

    int g{7};
    int i{2};
    add4(g, i);

    std::cout << "Done!" << std::endl;

    return 0;
}