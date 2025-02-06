#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <cstddef>
#include <string>
#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <ostream>

class ClapTrap
{
    private:
        std::string         name;
        unsigned int        hit_points;
        unsigned int        energy_points;
        unsigned int        attack_damage;
    public:
        ClapTrap(std::string str);
        ClapTrap(const ClapTrap& obj);
        ClapTrap& operator=(const ClapTrap& obj);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void showVitals();
};

#endif