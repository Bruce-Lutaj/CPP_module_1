#include "Fixed.hpp"
#include <mutex>

//Overload functions

std::ostream& operator<<(std::ostream& os, const Fixed& Fixed)
{
    os << Fixed.toFloat();
    return os;
}

Fixed&  Fixed::operator++()
{
    this->fixedPoint++;
    return *this;
}

Fixed&  Fixed::operator--()
{
    this->fixedPoint--;
    return *this;
}

Fixed   Fixed::operator++(int)
{
    Fixed tmp = *this;
    this->fixedPoint++;
    return tmp;
}

Fixed   Fixed::operator--(int)
{
    Fixed tmp = *this;
    this->fixedPoint--;
    return tmp;
}

Fixed& Fixed::min(Fixed& obj1,Fixed& obj2)
{
    if (obj1.getRawBits() < obj2.getRawBits())
    {
        return obj1;
    }
    return obj2;
}
const Fixed& Fixed::min(const Fixed& obj1,const Fixed& obj2)
{
    if (obj1.getRawBits() < obj2.getRawBits())
    {
        return obj1;
    }
    return obj2;
}

Fixed& Fixed::max(Fixed& obj1,Fixed& obj2)
{
    if (obj1.getRawBits() < obj2.getRawBits())
    {
        return obj2;
    }
    return obj1;
}

const Fixed& Fixed::max(const Fixed& obj1,const Fixed& obj2)
{
    if (obj1.getRawBits() < obj2.getRawBits())
    {
        return obj2;
    }
    return obj1;
}

bool Fixed::operator>(const Fixed& other) const
{
    return this->fixedPoint > other.fixedPoint;
}

bool Fixed::operator<(const Fixed& other) const
{
    return this->fixedPoint < other.fixedPoint;
}

bool Fixed::operator>=(const Fixed& other) const
{
    return this->fixedPoint >= other.fixedPoint;
}

bool Fixed::operator<=(const Fixed& other) const
{
    return this->fixedPoint <= other.fixedPoint;
}

bool Fixed::operator==(const Fixed& other) const
{
    return this->fixedPoint == other.fixedPoint;
}

bool Fixed::operator!=(const Fixed& other) const
{
    return this->fixedPoint < other.fixedPoint;
}

Fixed Fixed::operator+(const Fixed& other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
    return Fixed(this->toFloat() / other.toFloat());
}

// Class methods

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