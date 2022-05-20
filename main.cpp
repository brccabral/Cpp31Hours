#include <iostream>

int addNumbers(int x, int y)
{
    return x + y;
}

int main()
{
    int firstnumber{3};
    int secondnumber{7};
    std::cout << "First " << firstnumber << std::endl;
    std::cout << "Second " << secondnumber << std::endl;

    int sum = firstnumber + secondnumber;
    std::cout << "Sum " << sum << std::endl;

    int result = addNumbers(firstnumber, 20);
    std::cout << "Result " << result << std::endl;

    return 0;
}