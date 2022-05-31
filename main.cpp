#include <iostream>

// 1 - class MyClass final = can't be inherited
// 2 - myFunc() final = can't be overrided by inherited classes
// 3 - virtual myFunc() final = final will win and can't be overrided by inherited classes
// 4 - class MyClass final { virtual myFunc() } = can't inherit class so virtual is useless

// Intersting fact #1
/*
class Plane final
{
    Plane() = default;
};

// This will trigger a compiler error because Plane is final
class FigherJet : public Plane
{
};
*/
int main()
{

    std::cout << "Hello" << std::endl;
    return 0;
}