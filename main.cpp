#include <iostream>
#include <ctime>

int main()
{
    const char *message{"Hello World!"};               // must be const
    std::cout << "message : " << message << std::endl; // Hello World!

    //*message = "B"; // Compiler error
    std::cout << "*message : " << *message << std::endl; // H -> only the first char in the string

    // Allow users to modify the string
    char message1[]{"Hello World!"};
    message1[0] = 'B';
    std::cout << "message1 : " << message1 << std::endl; // Bello World!

    return 0;
}