#include "headers/Weapon.hpp"

Weapon::Weapon(std::string str)
{
    type = str;
}

std::string &Weapon::getType()
{
    std::string &ref = type;
    return ref;
}

void        Weapon::setType(std::string newType)
{
    type = newType;
}