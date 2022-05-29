#include <iostream>
#include <concepts>

template <typename T>
concept TinyType = requires(T t)
{
    sizeof(T) <= 4;          // Simple requirement : Only enforces syntax
    requires sizeof(T) <= 4; // Nested requirements
};

// Compound requirement
template <typename T>
concept Addable = requires(T a, T b)
{
    // Checks if a + b is valid syntax, doesn't throw expetions(optional) , and the result
    // is convertible to int(optional)
    {
        a + b
    }
    noexcept->std::convertible_to<int>; // Compound requirement

    // noexcept is optional
    // {a + b} -> std::convertible_to<int>; // Compound requirement
};

TinyType auto add1(TinyType auto a, TinyType auto b)
{
    return a + b;
}

Addable auto add2(Addable auto a, Addable auto b)
{
    return a + b;
}

int main()
{
    char c1{71};
    char c2{23};

    auto cr = add1(c1, c2); // char is TinyType, will convert to int (size 4) because of math operation
    std::cout << "cr : " << cr << std::endl;
    auto cr2 = add2(c1, c2); // char is Addable
    std::cout << "cr2 : " << cr2 << std::endl;

    double x{67};
    double y{56};
    // auto s2 = add1(x1, y1); // string are not TinyType

    // auto result = add1(x, y); // error, double is not TinyType
    auto result = add2(x, y);
    std::cout << "result : " << result << std::endl;
    std::cout << "sizeof(result) : " << sizeof(result) << std::endl;

    std::string x1{"Hello"};
    std::string y1{"World"};

    auto s = x1 + y1;
    std::cout << "s : " << s << std::endl;

    return 0;
}