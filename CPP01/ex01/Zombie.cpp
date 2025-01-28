#include "header/Zombie.hpp"

void    Zombie::giveName(std::string str)
{
    name = str;
}

Zombie::~Zombie(void)
{
     std::cout << Zombie::name << " got destroyed!" << std::endl;
}

Zombie::Zombie(void)
{
}

void    Zombie::announce(void)
{
    std::cout << Zombie::name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}