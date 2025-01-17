#include "headers/HumanB.hpp"

void HumanB::attack()
{
    if(weapon == NULL)
    {
        std::cout << name << " attacks with their bare fists" << std::endl;
    }
    else
    {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    }
}

void HumanB::setWeapon(Weapon &obj)
{
    weapon = &obj;
}

HumanB::HumanB(std::string str) : name(str), weapon(NULL)
{
}