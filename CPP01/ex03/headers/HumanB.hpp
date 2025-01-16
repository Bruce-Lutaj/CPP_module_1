#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon      weapon;
        std::string name;
    public:
        HumanA(std::string str, Weapon obj);
        void attack();
};

#endif