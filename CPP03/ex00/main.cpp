#include "ClapTrap.hpp"

int main()
{
    ClapTrap obj("John");

    obj.showVitals();
    obj.attack("Sauron");
    obj.takeDamage(5);
    obj.beRepaired(2);
    obj.showVitals();
    return 0;
}