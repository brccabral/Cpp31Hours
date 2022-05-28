#include <iostream>
#include <string>

template <typename T>
T maximum(T a, T b);

int main()
{

    int x{5};
    int y{7};
    auto result_int = maximum(x, y);
    std::cout << "max(int) : " << result_int << std::endl;

    double c{34.7};
    double d{23.4};
    std::cout << "max(double) : " << maximum(c, d) << std::endl;

    std::string h{"hello"};
    std::string w{"world"};
    std::cout << "max(string) : " << maximum(h, w) << std::endl;

    int *p_x{&x};
    int *p_y{&y};

    auto result = maximum(p_x, p_y);                  // will compare the addresses, not the values
    std::cout << "result : " << *result << std::endl; // 5, not 7

    return 0;
}

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}
