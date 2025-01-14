#include "headers/Zombie.hpp"
#include "headers/Zombie.h"

int main(void)
{
    Zombie obj("Foo");
    Zombie *p = newZombie("Heap");
    obj.announce();
    p->announce();
    randomChump("Stack");
    delete(p);
}