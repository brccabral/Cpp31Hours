#include <iostream>
#include <string>

int main()
{

    std::string full_name;                              // Empty string
    std::string planet{"Earth. Where the sky is blue"}; // Initialize with string literal
    std::string prefered_planet{planet};                // Initialize with other existing string
    std::string message{"Hello there", 5};              // Initialize with part of a string literal.
                                                        // Contains hello

    std::string weird_message(4, 'e'); // Initialize with multiple copies of a char
                                       //  contains eeee

    std::string greeting{"Hello World"};
    std::string saying_hello{greeting, 6, 5}; // Initialize with part of an existing std::string
                                              //  starting at index 6, taking 5 characters.
                                              // Will contain World.

    std::cout << "full_name : " << full_name << std::endl;             // prints nothing
    std::cout << "planet : " << planet << std::endl;                   // Earth. Where the sky is blue
    std::cout << "prefered_planet : " << prefered_planet << std::endl; // Earth. Where the sky is blue
    std::cout << "message : " << message << std::endl;                 // Hello
    std::cout << "weird_message : " << weird_message << std::endl;     // eeee
    std::cout << "greeting : " << greeting << std::endl;               // Hello World
    std::cout << "saying_hello : " << saying_hello << std::endl;       // World

    // Changing std::string at runtime
    // here the program is using the same memory as before
    planet = "Earth. Where the sky is blue Earth. Where the sky is blue Earth. Where ";
    std::cout << "planet : " << planet << std::endl; // Earth. Where the sky is blue Earth. Where the sky is blue Earth. Where

    // Use a raw array
    const char *planet1{"Earth. Where the sky is blue Earth."};
    // here the program is going to get a new memory space for the new string and the previous is wasted in memory
    planet1 = "Earth. Where the sky is blue Earth. Where the sky is blue Earth. Where ";
    std::cout << "planet1 : " << planet1 << std::endl; // Earth. Where the sky is blue Earth. Where the sky is blue Earth. Where

    return 0;
}