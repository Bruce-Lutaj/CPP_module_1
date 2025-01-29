#include "header/Zombie.hpp"

int main(void)
{
    Zombie obj("Stack");
    Zombie *p = newZombie("Heap");
    obj.announce();
    p->announce();
    randomChump("RandomCHump");
    delete(p);
}