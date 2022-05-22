#include <iostream>
#include <iomanip>

int main()
{
    // Non const reference
    std::cout << std::endl;
    std::cout << "Non const reference : " << std::endl;
    int age{27};
    int &ref_age{age};

    std::cout << "age : " << age << std::endl;
    std::cout << "ref_age : " << ref_age << std::endl;

    // Can modify original variable through reference

    std::cout << std::endl;
    std::cout << "Modify original variable through reference : " << std::endl;

    ref_age++; // Mofify through reference

    std::cout << "age : " << age << std::endl;
    std::cout << "ref_age : " << ref_age << std::endl;

    const int &ref_age_2{age};

    // ref_age_2++; // compile error because ref_age_2 is const

    // Simulating reference behavior with pointers
    const int *const p_age{&age};
    // *p_age = 45; // compile error because age is const

    return 0;
}