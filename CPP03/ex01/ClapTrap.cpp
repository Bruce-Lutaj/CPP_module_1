#include "headers/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string str)
{
    this->name = str;
    this->attack_damage = 0;
    this->hit_points = 10;
    this->energy_points = 10;
    std::cout << "ClapTrap constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
    *this = obj;
    std::cout << "ClapTrap copy constructor called!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
    if (this == &obj)
        return *this;
    this->name = obj.name;
    return *this;
}

ClapTrap::~ClapTrap() 
{
    std::cout << "ClapTrap Destructor called!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
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
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points == 0)
    {
        std::cout << this->name << " is already dead!" << std::endl;
        return ;
    }
    else if ((this->hit_points - amount) == 0 || (this->hit_points - amount) > this->hit_points)
    {
        std::cout << this->name << " got killed!" << std::endl;
        this->hit_points = 0;
        this->energy_points = 0;
        return ;
    }
    else 
    {
        this->hit_points -= amount;
        std::cout << this->name << " got attacked for " << amount << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hit_points == 0)
    {
        std::cout << this->name << " is dead!" << std::endl;
        return ;
    }
    else if (this->energy_points == 0)
    {
        std::cout << this->name << " has no stamina!" << std::endl;
        return ;
    }
    else 
    {
        this->hit_points += amount;
        std::cout << this->name << " got healed for " << amount << std::endl;
        this->energy_points--;
    }
}

void ClapTrap::showVitals()
{
    std::cout << "Hit Points: " << this->hit_points << std::endl;
    std::cout << "Energy Points: " << this->energy_points << std::endl;
}
