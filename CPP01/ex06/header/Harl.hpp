#ifndef HARL_HPP
#define HARL_HPP

#include <cstddef>
#include <string>
#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdlib>

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        void complain(std::string level);
};

#endif