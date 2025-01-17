#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <cstddef>
#include <string>
#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdlib>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string str);
        const std::string &getType();
        void setType(std::string newType);
};

#endif