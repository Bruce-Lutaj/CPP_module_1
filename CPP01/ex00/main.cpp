#include "header/Zombie.hpp"

int main(void)
{
    Zombie obj("Foo");
    Zombie *p = newZombie("Heap");
    obj.announce();
    p->announce();
    randomChump("Stack");
    delete(p);
}