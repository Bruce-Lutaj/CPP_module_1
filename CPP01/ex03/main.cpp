#include "headers/HumanA.hpp"
#include "headers/HumanB.hpp"
#include "headers/Weapon.hpp"

int main(void)
{
    {
        Weapon club = Weapon("crude spiked club");

        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other tpye of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");

        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other tpye of club");
        jim.attack();
    }
    return 0;
}
