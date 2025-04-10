#include "headers/Ice.hpp"
#include "headers/Cure.hpp"
#include "headers/AMateria.hpp"
#include "headers/Character.hpp"
#include "headers/ICharacter.hpp"
#include "headers/MateriaSource.hpp"
#include "headers/IMateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);
    
    // me->unequip(0);
    // me->unequip(1);
    
    delete bob;
    delete me;
    delete src;


    return 0;
}