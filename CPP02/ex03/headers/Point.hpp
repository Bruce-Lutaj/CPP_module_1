#include "Fixed.hpp"

#define Max_Int 8388607

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(const float f_x, const float f_y);
        Point(const Point& obj);
        Point& operator=(const Point& obj);
        ~Point();
        const Fixed& X() const;
        const Fixed& Y() const;
};

float area_calc(Point const a, Point const b, Point const c);
bool  bsp(Point const a, Point const b, Point const c, Point const point);