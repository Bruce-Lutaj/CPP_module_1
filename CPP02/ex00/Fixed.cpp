#include "Fixed.hpp"

Fixed& Fixed::operator=(const Fixed &obj)
{
    if (this == &obj)
        return *this;
    this->f_point_n = obj.f_point_n;
    return *this;
}

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
    this->f_point_n = obj.f_point_n;
    std::cout << "Copy constructor called" << std::endl;
}