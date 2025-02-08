#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string name;
    public:
    DiamondTrap(std::string str);
    DiamondTrap(const DiamondTrap& obj);
    DiamondTrap& operator=(const DiamondTrap& obj);
    ~DiamondTrap();
    void whoAmI();
};

#endif