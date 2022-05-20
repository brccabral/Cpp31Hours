#include <iostream>
#include <string>

int main()
{
    int number1 = 15; // Decimal
    int number2 = 017; // Octal
    int number3 = 0x0F; // Hexadecimal
    int number4 = 0b00001111; // Dinary

    std::cout << "number1 " << number1 << std::endl;
    std::cout << "number2 " << number2 << std::endl;
    std::cout << "number3 " << number3 << std::endl;
    std::cout << "number4 " << number4 << std::endl;

    
    //Check the size with sizeof
    std::cout << "sizeof int : " << sizeof(int) << std::endl;
    std::cout << "sizeof truck_count : " << sizeof(number1) << std::endl;

    return 0;
}