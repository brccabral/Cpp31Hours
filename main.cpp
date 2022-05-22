#include <iostream>
#include <iomanip>

int main()
{

    int int_data{33};
    double double_data{55};

    // References
    int &ref_int_data{int_data};
    double &ref_double_data{double_data};

    int tab_size = 19;
    std::cout << std::left;

    // Print stuff out
    std::cout << std::setw(tab_size) << "int_data"
              << " : " << int_data << std::endl;
    std::cout << std::setw(tab_size) << "&int_data"
              << " : " << &int_data << std::endl;
    std::cout << std::setw(tab_size) << "double_data"
              << " : " << double_data << std::endl;
    std::cout << std::setw(tab_size) << "&double_data"
              << " : " << &double_data << std::endl;

    std::cout << "=======================" << std::endl;

    std::cout << std::setw(tab_size) << "ref_int_data"
              << " : " << ref_int_data << std::endl;
    std::cout << std::setw(tab_size) << "&ref_int_data"
              << " : " << &ref_int_data << std::endl;
    std::cout << std::setw(tab_size) << "ref_double_data"
              << " : " << ref_double_data << std::endl;
    std::cout << std::setw(tab_size) << "&ref_double_data"
              << " : " << &ref_double_data << std::endl;

    // changing original variable
    int_data = 111;
    double_data = 67.2;

    // Print stuff out
    std::cout << std::endl;
    std::cout << std::setw(tab_size) << "int_data"
              << " : " << int_data << std::endl;
    std::cout << std::setw(tab_size) << "&int_data"
              << " : " << &int_data << std::endl;
    std::cout << std::setw(tab_size) << "double_data"
              << " : " << double_data << std::endl;
    std::cout << std::setw(tab_size) << "&double_data"
              << " : " << &double_data << std::endl;

    std::cout << "=======================" << std::endl;

    std::cout << std::setw(tab_size) << "ref_int_data"
              << " : " << ref_int_data << std::endl;
    std::cout << std::setw(tab_size) << "&ref_int_data"
              << " : " << &ref_int_data << std::endl;
    std::cout << std::setw(tab_size) << "ref_double_data"
              << " : " << ref_double_data << std::endl;
    std::cout << std::setw(tab_size) << "&ref_double_data"
              << " : " << &ref_double_data << std::endl;

    // changing reference variable
    ref_int_data = 1012;
    ref_double_data = 1000.45;

    // Print stuff out
    std::cout << std::endl;
    std::cout << std::setw(tab_size) << "int_data"
              << " : " << int_data << std::endl;
    std::cout << std::setw(tab_size) << "&int_data"
              << " : " << &int_data << std::endl;
    std::cout << std::setw(tab_size) << "double_data"
              << " : " << double_data << std::endl;
    std::cout << std::setw(tab_size) << "&double_data"
              << " : " << &double_data << std::endl;

    std::cout << "=======================" << std::endl;

    std::cout << std::setw(tab_size) << "ref_int_data"
              << " : " << ref_int_data << std::endl;
    std::cout << std::setw(tab_size) << "&ref_int_data"
              << " : " << &ref_int_data << std::endl;
    std::cout << std::setw(tab_size) << "ref_double_data"
              << " : " << ref_double_data << std::endl;
    std::cout << std::setw(tab_size) << "&ref_double_data"
              << " : " << &ref_double_data << std::endl;

    return 0;
}