#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& os, const Fixed& Fixed)
{
    os << Fixed.toFloat();
    return os;
}

Fixed::Fixed()
{
    this->fixedPoint = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
    this->fixedPoint = n << fractionalBits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float fn)
{
    this->fixedPoint = roundf(fn * (1 << fractionalBits));
    std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &obj)
{
    if (this == &obj)
        return *this;
    this->fixedPoint = obj.fixedPoint;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
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
    return this->fixedPoint;
}

void    Fixed::setRawBits(int const raw)
{
    this->fixedPoint = raw << fractionalBits;
}

float   Fixed::toFloat(void) const
{
    return static_cast<float>(this->fixedPoint) / (1 << Fixed::fractionalBits);
}

int     Fixed::toInt(void) const
{
    return this->fixedPoint >> fractionalBits;
}