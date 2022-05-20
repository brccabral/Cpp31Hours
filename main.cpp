#include <iostream>

int main()
{

    // Declare array
    char message[6]{"Hello"}; // 5 chars, but string ends with \n
    int data[5]{1, 2, 3, 3, 3};

    std::cout << "data : " << data << std::endl; // prints garbage 0000008F3E2FF780

    // Print out the array through looping

    std::cout << "message : ";
    for (auto c : message)
    {
        std::cout << c;
    }
    std::cout << std::endl; // Hello

    // Change characters in our array
    message[1] = 'a';

    // Print out the array through looping
    std::cout << "message : ";
    for (auto c : message)
    {
        std::cout << c;
    }
    std::cout << std::endl; // Hallo

    std::cout << "message : " << message << std::endl; // Hallo

    // If a character array is null terminated, it's called as C-String

    char message1[]{'H', 'e', 'l', 'l', 'o', '\0'};
    std::cout << "message1 : " << message1 << std::endl;                 // Hello
    std::cout << "sizeof(message1) : " << sizeof(message1) << std::endl; // 6

    char message2[6]{'H', 'e', 'l', 'l', 'o'};                           // size is 6, the 6th char is null
    std::cout << "message2 : " << message2 << std::endl;                 // Hello
    std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl; // 6

    char message3[]{'H', 'e', 'l', 'l', 'o'};                            // This is not a c string ,
                                                                         // as there is not null character
    std::cout << "message3 : " << message3 << std::endl;                 // Hello
    std::cout << "sizeof(message3) : " << sizeof(message3) << std::endl; // 5

    // String literal

    char message4[]{"Hello"};
    std::cout << "message4 : " << message4 << std::endl;                 // Hello
    std::cout << "sizeof(message4) : " << sizeof(message4) << std::endl; // 6

    char message5[5]{'H', 'e', 'l', 'l', 'o'};
    std::cout << "message5 : " << message5 << std::endl;                 // Hello
    std::cout << "sizeof(message5) : " << sizeof(message5) << std::endl; // 5

    // Can't safely print out arrays other than those of characters
    int numbers[]{1, 2, 3, 4, 5};
    std::cout << "numbers :  " << numbers << std::endl; // prints garbage 0000008F3E2FF798

    return 0;
}