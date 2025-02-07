#include "headers/ClapTrap.hpp"
#include "headers/ScavTrap.hpp"

int main()
{
    ScavTrap obj("Franco");

    obj.showVitals();
    obj.attack("Sauron");
    obj.guardGate();
    obj.takeDamage(11);
    obj.beRepaired(1);
    obj.showVitals();
    return 0;
}