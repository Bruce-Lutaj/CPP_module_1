#include "ClapTrap.hpp"

int main()
{
    ClapTrap obj("John");

    obj.showVitals();
    obj.attack("Sauron");
    obj.takeDamage(11);
    obj.beRepaired(1);
    obj.showVitals();
    return 0;
}