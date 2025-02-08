#include "headers/ClapTrap.hpp"
#include "headers/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
{
    this->attack_damage = 20;
    this->hit_points = 100;
    this->energy_points = 50;
    std::cout << "ScavTrap constructor called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    if (this != &obj)
        ClapTrap::operator=(obj);
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->energy_points == 0)
    {
        std::cout << "No stamina!" << std::endl;
        return ;
    }
    else if (this->hit_points == 0)
    {
        std::cout << "Can't attack he's dead!" << std::endl;
        return ;
    }
    else
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
}

void ScavTrap::guardGate()
{
    std::cout << this->name << " is in Gate keeper mode!" << std::endl;
}