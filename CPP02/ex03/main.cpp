#include "headers/Fixed.hpp"
#include "headers/Point.hpp"

int main()
{
    Point a(-5, -2);
    Point b(-7, -3);
    Point c(-2, -4);
    Point to_find(-5, -3);
    if (bsp(a, b, c, to_find) == true)
    {
        std::cout << "It's inside the triangle" << std::endl;
    }
    else 
    {
        std::cout << "It's outside the triangle" << std::endl;
    }
    return 0;
}