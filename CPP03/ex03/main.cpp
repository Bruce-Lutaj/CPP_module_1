#include "headers/ClapTrap.hpp"
#include "headers/DiamondTrap.hpp"
#include "headers/FragTrap.hpp"

int main()
{
    DiamondTrap obj("Franco");

    obj.showVitals();
    obj.whoAmI();
    obj.attack("Luigi");
    obj.guardGate();
    obj.highFivesGuys();
    obj.showVitals();
    return 0;
}