#include <iostream>

int main()
{
    /*
    Lambda function signature :
                                [capture list] (parameters) ->return type{
                                        // Function body
                                }
    */

    // Declaring a lambda function and calling it through a name

    auto func = []()
    {
        std::cout << "Hello World!" << std::endl;
    };
    func();
    func();

    // Declare a lambda function and call it directly

    []()
    {
        std::cout << "Hello World!" << std::endl;
    }();

    // Lambda function that takes parameters

    [](double a, double b)
    {
        std::cout << "a + b : " << (a + b) << std::endl;
    }(10.0, 50.0);

    auto func1 = [](double a, double b)
    {
        std::cout << "a + b : " << (a + b) << std::endl;
    };

    func1(10, 20);
    func1(5, 7);

    // Lambda function that returns something

    auto result = [](double a, double b)
    {
        return a + b;
    }(10, 60);

    std::cout << "result : " << result << std::endl;
    std::cout << "result : " << [](double a, double b)
    {
        return a + b;
    }(10, 60) << std::endl;

    auto func2 = [](double a, double b)
    {
        return a + b;
    };

    auto result1 = func2(23, 7);
    auto result2 = func2(9, 45);

    std::cout << "result1 : " << result1 << std::endl;
    std::cout << "result2 : " << result2 << std::endl;
    std::cout << "direct call : " << func2(5, 2) << std::endl;

    // Explicitly specify the return type
    auto func3 = [](double a, double b) -> int
    {
        return a + b;
    };

    auto func4 = [](double a, double b)
    {
        return a + b;
    };

    double a{6.9};
    double b{3.5};

    auto result3 = func3(a, b);
    auto result4 = func4(a, b);

    std::cout << "result3 : " << result3 << std::endl;
    std::cout << "result4 : " << result4 << std::endl;
    std::cout << "sizeof(result3) : " << sizeof(result3) << std::endl; // 4
    std::cout << "sizeof(result4) : " << sizeof(result4) << std::endl; // 8

    std::cout << "Done!" << std::endl;

    // Capture lists

    double a1{10};
    double b1{20};

    auto func7 = [a1, b1]()
    {
        std::cout << "a + b : " << a1 + b1 << std::endl;
    };
    func7();

    // Capturing by value

    int c{42};

    auto func5 = [c]()
    {
        std::cout << "func5 Inner value : " << c << " &inner : " << &c << std::endl; // value stays as 42
    };

    for (size_t i{}; i < 5; ++i)
    {
        std::cout << "func5 Outer value : " << c << " &outer : " << &c << std::endl; // 42, 43, 44, 45, 46
        func5();                                                                     // inner value stays as 42
        ++c;
    }

    // Capture by reference
    int c2{42};

    auto func6 = [&c2]()
    {
        std::cout << "func6 Inner value : " << c2 << " &inner : " << &c2 << std::endl; // 42, 43, 44, 45, 46
    };

    for (size_t i{}; i < 5; ++i)
    {
        std::cout << "func6 Outer value : " << c2 << " &outer : " << &c2 << std::endl; // 42, 43, 44, 45, 46
        func6();
        ++c2;
    }

    // Capture everything by value

    int c3{42};
    int d3{5};

    auto func8 = [=]()
    {
        std::cout << "func8 Inner value : c3 " << c3 << " d3 " << d3 << std::endl; // 42, 43, 44, 45, 46 | 5, 6, 7, 8, 9
    };

    for (size_t i{}; i < 5; ++i)
    {
        std::cout << "func8 Outer value : c3 " << c3 << " d3 " << d3 << std::endl; // 42, 5
        func8();
        ++c3;
        ++d3;
    }

    // Capturing all reference
    int c4{42};
    int d4{5};

    auto func9 = [&]()
    {
        std::cout << "func9 Inner value : c4 " << c4 << " d4 " << d4 << std::endl; // 42, 43, 44, 45, 46 | 5, 6, 7, 8, 9
    };

    for (size_t i{}; i < 5; ++i)
    {
        std::cout << "func9 Outer value : c4 " << c4 << " d4 " << d4 << std::endl; // 42, 43, 44, 45, 46 | 5, 6, 7, 8, 9
        func9();
        ++c4;
        ++d4;
    }

    return 0;
}