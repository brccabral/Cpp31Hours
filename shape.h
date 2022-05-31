#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <string_view>
#include <iostream>
class Shape
{
public:
    Shape() = default;
    Shape(std::string_view description);
    ~Shape();

    void draw() const
    {
        std::cout << "Shape::draw() called. Drawing " << m_description << std::endl;
    }

    std::string get_desc() const
    {
        return m_description;
    }

protected:
    std::string m_description{""};
};

#endif // SHAPE_H
