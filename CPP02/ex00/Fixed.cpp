#include "Fixed.hpp"

Fixed& Fixed::operator=(const Fixed &obj)
{
    if (this == &obj)
        return *this;
    this->f_point_n = obj.f_point_n;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

Fixed::Fixed()
{
    this->f_point_n = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
    *this = obj;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->f_point_n;
}

void    Fixed::setRawBits(int const raw)
{
    this->f_point_n = raw << Fixed::f_bits;
}