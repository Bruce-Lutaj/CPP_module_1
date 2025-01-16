#include "headers/Zombie.h"
#include "headers/Zombie.hpp"

int main(void)
{
    int n = 10;
    Zombie *obj = zombieHorde(n, "John");
    for (int i = 0; i < n; i++)
        obj[i].announce();
    delete [] obj;
    return 0;
}
