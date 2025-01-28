#include "header/Zombie.hpp"

Zombie::Zombie(std::string str)
{
    name = str;
}

Zombie::~Zombie(void)
{
     std::cout << Zombie::name << " got destroyed!" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << Zombie::name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}