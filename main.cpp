#include <iostream>
#include <string>

int main()
{
    int age;
    std::string name;

    std::cout << "Type Last Name and Age separated by spaces: " << std::endl;
    std::cin >> name >> age;
    std::cout << "Hello " << name << "! You are " << age << " years old." << std::endl;

    std::cerr << "Something is wrong" << std::endl;
    std::clog << "Send to log" << std::endl;

    std::string fullname;
    std::cout << "Type Full Name: " << std::endl;
    // need include <string> to use getline
    // Previous line sends \n to cin, need to flush it to std::ws before getting the name
    std::getline(std::cin >> std::ws, fullname); 
    int age1;
    std::cout << "Age: " << std::endl;
    std::cin >> age1;
    std::cout << "Welcome " << fullname << " Age " << age1 << std::endl;

    return 0;
}