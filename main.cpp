#include <iostream>
#include <memory>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main()
{

    Circle c1(7.2, "c1");
    Oval o1(13.3, 1.2, "o1");
    c1.draw(); // Circle::draw() called. Drawing c1 with radius : 7.2

    // When using override, needs to override all overloaded functions (functions with same name)
    // c1.draw(12,"Green"); // Compile error - Circle overrides only one draw(), but not the other draw(int)

    o1.draw();            // Oval::draw() called. Drawing o1 with m_x_radius : 13.3 and m_y_radius : 1.2
    o1.draw(12, "Green"); // Drawing with color depth : 12 and color : Green

    Shape *shape_ptr1 = new Oval(10, 15, "Oval1");
    shape_ptr1->draw(); // Oval::draw() called. Drawing Oval1 with m_x_radius : 10 and m_y_radius : 15
    // shape_ptr1->draw(3, "Red"); // Shape doesn't know any draw(int,str)

    Oval *o_ptr = new Oval(2, 4, "Optr");
    o_ptr->draw();          // Oval::draw() called. Drawing Optr with m_x_radius : 2 and m_y_radius : 4
    o_ptr->draw(3, "Blue"); // Drawing with color depth : 3 and color : Blue

    Shape *shape_ptr = new Circle(10, "Circle1");
    shape_ptr->draw();  // Circle::draw() called. Drawing Circle1 with radius : 10
    shape_ptr->draw(2); // Circle doesn't override draw(int) // Shape::Drawing with color depth : 2

    return 0;
}