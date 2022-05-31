#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

// After changind all draw() methods to "virtual" we can achieve
//  dynamic biding and call the correct class method

void draw_shape(Shape *shape_ptr)
{
    std::cout << "Ptr " << shape_ptr->get_desc() << std::endl;
    shape_ptr->draw();
}

void draw_shape(const Shape &shape)
{
    std::cout << "Ref " << shape.get_desc() << std::endl;
    shape.draw();
}

int main()
{

    Shape shape1("Shape1");
    shape1.draw(); // Shape::draw() called. Drawing Shape1

    Oval oval1(2.0, 3.5, "Oval1");
    oval1.draw(); // Oval::draw() called. Drawing Oval1 with m_x_radius : 2 and m_y_radius : 3.5

    Circle circle1(3.3, "Circle1");
    circle1.draw(); // Circle::draw() called. Drawing Circle1 with radius : 3.3

    // Base pointers
    Shape *shape_ptr = &shape1;
    shape_ptr->draw(); // Shape::draw() called. Drawing Shape1

    shape_ptr = &oval1;
    shape_ptr->draw(); // Oval::draw() called. Drawing Oval1 with m_x_radius : 2 and m_y_radius : 3.5

    shape_ptr = &circle1;
    shape_ptr->draw(); // Circle::draw() called. Drawing Circle1 with radius : 3.3

    // Base references
    Shape &shape_ref = circle1;
    shape_ref.draw(); // Circle::draw() called. Drawing Circle1 with radius : 3.3

    // Shapes stored in collections
    Circle circle_collection[]{circle1, Circle(10.0, "Circle2"), Circle(20.0, "Circle3")};
    Oval oval_collection[]{oval1, Oval(22.3, 51.1, "Oval2")};
    // More arrays as you have more shape types, 100? Messy right?
    for (const auto &c : circle_collection)
    {
        c.draw(); // Circle::draw() called. Drawing Circle1 with radius : XXX
    }

    draw_shape(circle1); // Ref Circle1
                         // Circle::draw() called. Drawing Circle1 with radius : 3.3

    draw_shape(&oval1); // Ptr Oval1
                        // Oval::draw() called. Drawing Oval1 with m_x_radius : 2 and m_y_radius : 3.5

    Shape *shape_collection[]{&shape1, &oval1, &circle1};
    for (Shape *s_ptr : shape_collection)
    {
        s_ptr->draw(); // Shape::draw()|Oval::draw|Circle::draw called. Drawing DDD
    }

    return 0;
}