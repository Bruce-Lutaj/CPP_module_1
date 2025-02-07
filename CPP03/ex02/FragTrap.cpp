#include "headers/ClapTrap.hpp"
#include "headers/FragTrap.hpp"

FragTrap::FragTrap(std::string str) : ClapTrap(str)
{
    this->attack_damage = 30;
    this->hit_points = 100;
    this->energy_points = 100;
    std::cout << "FragTrap constructor called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
    if (this != &obj)
        ClapTrap::operator=(obj);
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Hey highfive guys! :D" << std::endl;
}