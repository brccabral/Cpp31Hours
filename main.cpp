#include <iostream>
#include <type_traits>

template <typename T>
void print_number(T n)
{
    static_assert(std::is_integral_v<T>, "print_number() can only be called with integral types");
    std::cout << "number : " << n << std::endl;
}

int main()
{

    // std::is_integral true for int/const int/bool/char
    // std::is_floating_point true for float/double, false for float&/double&
    std::cout << std::boolalpha;
    std::cout << "std::is_integral<int> : " << std::is_integral<int>::value << std::endl;
    std::cout << "std::is_floating_point<int> : " << std::is_floating_point<int>::value << std::endl;

    std::cout << "-------------" << std::endl;

    // std::is_integral_v = evaluates and returns a boolean
    // std::is_floating_point_v = evaluates and returns a boolean
    std::cout << "std::is_integral_v<int> : " << std::is_integral_v<int> << std::endl;
    std::cout << "std::is_floating_point_v<int> : " << std::is_floating_point_v<int> << std::endl;

    int a{7};
    print_number(a);

    double b{7};
    // print_number(b); // error, b is double

    auto func = []<typename T>(T a, T b)
    {
        static_assert(std::is_integral_v<T>, "func can only be called with integral types");
        return a + b;
    };

    double x{7};
    double y{6};
    // func(x,y); // error, x and y are double

    int c{3};
    int d{5};
    func(c, d);

    return 0;
}