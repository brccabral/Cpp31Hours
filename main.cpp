#include <iostream>

#include "ellipse.h"

int main()
{

    // Shape
    Shape shape1("shape1");
    std::cout << "shape count : " << Shape::m_count << std::endl; // 1

    Shape shape2("shape2");
    std::cout << "shape count : " << Shape::m_count << std::endl; // 2

    Shape shape3;
    std::cout << "shape count : " << Shape::m_count << std::endl; // 3

    std::cout << "***********************************************" << std::endl;

    // Ellipse
    Ellipse ellipse1(10, 12, "ellipse1");
    std::cout << "shape count : " << Shape::m_count << std::endl;     // 4
    std::cout << "ellipse count : " << Ellipse::m_count << std::endl; // 1

    std::cout << "***********************************************" << std::endl;

    // Shape polymorphism

    Shape *shapes[]{&shape1, &ellipse1};
    for (auto &s : shapes)
    {
        std::cout << "count : " << s->get_count() << std::endl;
    }

    /*
    Ellipse has its own static m_count

    shape count : 1
    shape count : 2
    shape count : 3
    ***********************************************
    shape count : 4
    ellipse count : 1
    ***********************************************
    count : 4
    count : 1
    */

    return 0;
}