#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
private:
    Fixed const x;
    Fixed const y;

public:
    Point();
    Point(const Point& src);
    Point(const float &a, const float &b);
    Point& operator=(const Point& src);
    ~Point();
    float get_floatx() const;
    float get_floaty() const;
};

#endif //POINT_HPP