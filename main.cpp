#include <iostream>
#include <string>

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{

    int a{10};
    int b{23};
    double c{34.7};
    double d{23.4};
    std::string e{"hello"};
    std::string f{"world"};

    maximum(a, b); // int type deduced
    maximum(c, d); // double type deduced
    maximum(e, f); // string type deduced
    
    // maximum(a, d); // Error, using different types

    // Explicit template arguments
    auto max = maximum<double>(c, d); // explicitly say we want double template
                                      // if compiler has not created yet, it will create now

    std::cout << "max : " << max << std::endl;

    auto max_int = maximum<int>(a, c); // explicitly say we want int template
                                       // if compiler has not created yet, it will create now
                                       // works because there is implicit convertion int to double

    std::cout << "max : " << max_int << std::endl;

    // auto max_str = maximum<double>(c, e); // Error, can't convert std::string to double

    return 0;
}