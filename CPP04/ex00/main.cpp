#include "headers/Animal.hpp"
#include "headers/Dog.hpp"
#include "headers/Cat.hpp"
#include "headers/WrongAnimal.hpp"
#include "headers/WrongCat.hpp"

int main()
{
    std::cout << std::endl << "Correct animal polymorphism" << std::endl << std::endl;
    
    const Animal* meta = new Animal();
    std::cout << "--------------------" << std::endl;
    const Animal* j = new Dog();
    std::cout << "--------------------" << std::endl;
    const Animal* i = new Cat();
    std::cout << "--------------------" << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout << "--------------------" << std::endl;
    delete meta;
    std::cout << "--------------------" << std::endl;
    delete j;
    std::cout << "--------------------" << std::endl;
    delete i;
    
    std::cout << std::endl << "Wrong animal polymorphism" << std::endl << std::endl;
    
    const WrongAnimal* momo = new WrongAnimal();
    const WrongAnimal* x = new WrongCat();
    std::cout << x->getType() << " " << std::endl;
    x->makeSound();
    momo->makeSound();
    delete momo;
    delete x;
    return 0;
}
