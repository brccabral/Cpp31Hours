#include <iostream>
#include <ctime>

int main()
{
    // For 3d and really any multi dimensional array , you have to specify
    // the number of elements in []'s , only the left most is not mandatory.
    // Below is the example for 3D reproduced.Omitting the 5 or the 4 or both
    // will cause a compile error.

    // If you put less elements than the amount specified in the declaration, the compiler
    // will automaticaly fill out those left out with 0 or '\0' is the array is of char.

    int house_block1[][5][4]{

        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15}},
        {{16, 17, 18}, {19, 20, 21}, {22, 23, 24}, {25, 26, 27}, {28, 29, 30}},
        {{31, 32, 33}, {34, 35, 36}, {37, 38, 39}, {40, 41, 42}, {43, 44, 45}},
        {{46, 47, 48}, {49, 50, 51}, {52, 53, 54}, {55, 56, 57}, {58, 59, 60}}

    };

    for (size_t i{0}; i < std::size(house_block1); ++i)
    {

        for (size_t j{0}; j < std::size(house_block1[i]); ++j)
        {

            std::cout << "[";
            for (size_t k{0}; k < std::size(house_block1[i][j]); ++k)
            {

                std::cout << house_block1[i][j][k] << " ";
            }
            std::cout << "] "; // Separate elements for good visualization
        }
        std::cout << std::endl; // Separate elements for good visualization
    }

    return 0;
}