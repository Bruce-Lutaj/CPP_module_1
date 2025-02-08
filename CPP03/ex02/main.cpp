#include "headers/ClapTrap.hpp"
#include "headers/FragTrap.hpp"

int main()
{
    FragTrap obj("Franco");

    obj.showVitals();
    obj.attack("Sauron");
    obj.takeDamage(5);
    obj.beRepaired(2);
    obj.highFivesGuys();
    obj.showVitals();
    return 0;
}