#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{

    std::srand(std::time(0)); // Seed

    int random_num = std::rand();

    std::cout << "random_num 1: " << random_num << std::endl; // 0 ~ RAND_MAX

    random_num = std::rand();
    std::cout << "random_num 2: " << random_num << std::endl; // 0 ~ RAND_MAX

    // Generate random numbers in a loop

    for (size_t i{0}; i < 20; ++i)
    {
        random_num = std::rand();
        std::cout << "random_num 3: " << i << ":  " << random_num << std::endl; // 0 ~ RAND_MAX
    }

    // Generate a range between 0 and 10

    for (size_t i{0}; i < 20; ++i)
    {
        random_num = std::rand() % 11;                                          // [ 0~10]
        std::cout << "random_num 4: " << i << ":  " << random_num << std::endl; // 0 ~ RAND_MAX
    }

    for (size_t i{0}; i < 20; ++i)
    {
        random_num = std::rand() % 10 + 1;                                      // [1~10]
        std::cout << "random_num 5: " << i << ":  " << random_num << std::endl; // 0 ~ RAND_MAX
    }

    return 0;
}