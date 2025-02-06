#include "headers/Fixed.hpp"
#include "headers/Point.hpp"

float area_calc(Point const a, Point const b, Point const c)
{
    float area = ((a.X().toFloat() * (b.Y().toFloat() - c.Y().toFloat())) 
                    + b.X().toFloat() * (c.Y().toFloat() - a.Y().toFloat()) 
                        + c.X().toFloat() * (a.Y().toFloat() - b.Y().toFloat())) /2;
    if (area < 0)
        return -area;
    return area;
}

bool  bsp(Point const a, Point const b, Point const c, Point const point)
{
    float all_area = area_calc(a, b, c);
    float area_1 = area_calc(a, b, point);
    float area_2 = area_calc(a, point, c);
    float area_3 = area_calc(point, b, c);
    if (area_1 == 0 || area_2 == 0 || area_3 == 0)
        return false;
    else if ((area_1 + area_2 + area_3) == all_area)
    {
        return true;
    }
    return false;
}
