#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float f_x, const float f_y) : x(f_x), y(f_y) {}

Point::Point(const Point& obj) : x(obj.x), y(obj.y) {}

Point&  Point::operator=(const Point& obj)
{
    (void)obj;
    return *this;
}

Point::~Point() {}

const Fixed& Point::X() const
{
    return x;
}

const Fixed& Point::Y() const
{
    return y;
}
