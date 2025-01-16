#include "headers/HumanB.hpp"

void HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanB::HumanB(std::string str) : name(str), 
{
}