#include "headers/ClapTrap.hpp"
#include "headers/FragTrap.hpp"

int main()
{
    FragTrap obj("Franco");

    obj.showVitals();
    obj.attack("Sauron");
    obj.takeDamage(11);
    obj.beRepaired(1);
    obj.highFivesGuys();
    obj.showVitals();
    return 0;
}