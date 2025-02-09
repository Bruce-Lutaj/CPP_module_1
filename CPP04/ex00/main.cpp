#include "headers/Animal.hpp"
#include "headers/Dog.hpp"
#include "headers/Cat.hpp"
#include "headers/WrongAnimal.hpp"
#include "headers/WrongCat.hpp"

int main()
{
    std::cout << std::endl << "Correct animal polymorphism" << std::endl << std::endl;
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    
    std::cout << std::endl << "Wrong animal polymorphism" << std::endl << std::endl;
    
    const WrongAnimal* momo = new WrongAnimal();
    const WrongAnimal* x = new WrongCat();
    std::cout << x->getType() << " " << std::endl;
    x->makeSound(); //will output the cat sound!
    momo->makeSound();
    delete momo;
    delete x;
    return 0;
}
