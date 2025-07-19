#include "Point.hpp"
#include "iostream"

Point::Point() : x(0), y(0) {
    //std::cout << "Default Constructor Called" << std::endl;
}
Point::Point(const float &a, const float&b) : x(Fixed(a)), y(Fixed(b))
{
    //std::cout << "Constructor Called" << std::endl;
}

Point::Point(const Point& src) : x(src.x), y(src.y) {
    //std::cout << "Copy Constructor Called" << std::endl;
}

Point& Point::operator=(const Point& src) {
    //std::cout << "Assignation Operator Called" << std::endl;
    if (this != &src)
    {
        this->x = src.x;
        this->y = src.y;
    }
    return *this;
}

Point::~Point() {
    //std::cout << "Destructor Called" << std::endl;
}

float Point::get_floatx() const
{
    return this->x.toFloat();
}
float Point::get_floaty() const
{
    return this->y.toFloat();
}

