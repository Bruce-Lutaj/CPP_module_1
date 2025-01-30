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
        int                 f_point_n;
        static const int    f_bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &obj);
        Fixed& operator=(const Fixed& obj);
        ~Fixed();
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif