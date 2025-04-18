#ifndef FIXED_HPP
#define FIXED_HPP

#include <cstddef>
#include <string>
#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdlib>

class Fixed
{
    private:
        int                 fixedPoint;
        static const int    fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &obj);
        Fixed& operator=(const Fixed& obj);
        ~Fixed();
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif