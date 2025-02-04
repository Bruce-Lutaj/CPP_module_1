#ifndef FIXED_HPP
#define FIXED_HPP

#include <cstddef>
#include <string>
#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <ostream>
#include <cmath>

class Fixed
{
    private:
        int                 fixedPoint;
        static const int    fractionalBits = 8;
    public:
        Fixed();
        Fixed(const int n);
        Fixed(const float fn);
        Fixed(const Fixed &obj);
        Fixed& operator=(const Fixed& obj);
        ~Fixed();
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
        
};

std::ostream& operator<<(std::ostream& os, const Fixed& Fixed);

#endif