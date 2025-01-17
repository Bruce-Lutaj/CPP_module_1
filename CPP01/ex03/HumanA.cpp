#include "headers/HumanA.hpp"

void    HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::HumanA(std::string str, Weapon &obj) : weapon(obj), name(str) 
{
}