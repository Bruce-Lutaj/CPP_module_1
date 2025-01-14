#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <cstddef>
#include <string>
#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdlib>

class Zombie
{
    private:
        std::string name;
    public:
        void    announce(void);
        Zombie(std::string str);
        ~Zombie(void);
};

#endif