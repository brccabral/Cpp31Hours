#include <iostream>
#include <iomanip>

int main()
{

    // Declare pointer and reference
    double double_value{12.34};
    double &ref_double_value{double_value}; // Reference to double_value, refence requires to initiale its value, can't be null
    double *p_double_value{&double_value};  // Pointer to double_value

    // Reading
    std::cout << "double_value : " << double_value << std::endl;         // 12.34
    std::cout << "ref_double_value : " << ref_double_value << std::endl; // 12.34
    std::cout << "p_double_value : " << p_double_value << std::endl;     // address of p_double_value
    std::cout << "*p_double_value : " << *p_double_value << std::endl;   // 12.34

    // Writting through pointer
    *p_double_value = 15.44;

    std::cout << std::endl;
    std::cout << "double_value : " << double_value << std::endl;         // 15.44
    std::cout << "ref_double_value : " << ref_double_value << std::endl; // 15.44
    std::cout << "p_double_value : " << p_double_value << std::endl;     // address of p_double_value
    std::cout << "*p_double_value : " << *p_double_value << std::endl;   // 15.44

    // Writting through reference
    ref_double_value = 18.44;

    std::cout << std::endl;
    std::cout << "double_value : " << double_value << std::endl;         // 18.44
    std::cout << "ref_double_value : " << ref_double_value << std::endl; // 18.44
    std::cout << "p_double_value : " << p_double_value << std::endl;     // address of p_double_value
    std::cout << "*p_double_value : " << *p_double_value << std::endl;   // 18.44

    double some_other_double{78.45};

    // Make the reference reference something else.
    //  this is actually writing value
    ref_double_value = some_other_double;

    std::cout << "Making the reference reference something else..." << std::endl;
    std::cout << std::endl;
    std::cout << "double_value : " << double_value << std::endl;         // 78.45
    std::cout << "ref_double_value : " << ref_double_value << std::endl; // 78.45
    std::cout << "p_double_value : " << p_double_value << std::endl;     // address of p_double_value
    std::cout << "*p_double_value : " << *p_double_value << std::endl;   // 78.45

    // Make the pointer point to something else
    p_double_value = &some_other_double;
    std::cout << "Making the pointer point somewhere else..." << std::endl;
    std::cout << std::endl;
    std::cout << "double_value : " << double_value << std::endl;           // 78.45
    std::cout << "ref_double_value : " << ref_double_value << std::endl;   // 78.45
    std::cout << "&double_value : " << &double_value << std::endl;         // address of p_double_value
    std::cout << "&ref_double_value : " << &ref_double_value << std::endl; // address of p_double_value
    std::cout << "p_double_value : " << p_double_value << std::endl;       // changed address to some_other_double
    std::cout << "*p_double_value : " << *p_double_value << std::endl;     // value of some_other_double 78.45

    *p_double_value = 555.5;

    std::cout << std::endl;
    std::cout << "double_value : " << double_value << std::endl;             // 78.45
    std::cout << "ref_double_value : " << ref_double_value << std::endl;     // 78.45
    std::cout << "&double_value : " << &double_value << std::endl;           // address of p_double_value
    std::cout << "&ref_double_value : " << &ref_double_value << std::endl;   // address of p_double_value
    std::cout << "p_double_value : " << p_double_value << std::endl;         // changed address to some_other_double
    std::cout << "*p_double_value : " << *p_double_value << std::endl;       // value of some_other_double 555.5
    std::cout << "some_other_double : " << some_other_double << std::endl;   // 555.5
    std::cout << "&some_other_double : " << &some_other_double << std::endl; // address of some_other_double

    return 0;
}