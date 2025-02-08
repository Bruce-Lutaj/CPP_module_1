#include "headers/DiamondTrap.hpp"
#include "headers/ClapTrap.hpp"
#include "headers/FragTrap.hpp"
#include "headers/ScavTrap.hpp"

DiamondTrap::DiamondTrap(std::string str) : ClapTrap(str + "_clap_name"), ScavTrap(str), FragTrap(str)
{
    this->name = str;
    this->hit_points = FragTrap::hit_points;
    this->energy_points = 50;
    this->attack_damage = FragTrap::attack_damage;
    std::cout << "DiamondTrap constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) : ClapTrap(obj), ScavTrap(obj), FragTrap(obj)
{
    *this = obj;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
    if (this != &obj)
    {
        ClapTrap::operator=(obj);
        this->name = obj.name;

    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called!" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is " << this->name << std::endl;
    std::cout << "The name of my father is " << ClapTrap::name << std::endl;
}