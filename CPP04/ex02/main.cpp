#include "headers/Animal.hpp"
#include "headers/Dog.hpp"
#include "headers/Cat.hpp"

int main()
{
    std::cout << "Creating basic\n" << std::endl;
    Dog basic;
    std::cout << "\nUsing copy constructor\n" << std::endl;
    Dog a(basic);
    {
        std::cout << "\nCreating tmp\n" << std::endl;
        Dog tmp = basic;
        std::cout << "\nDestroying tmp\n" << std::endl;
    }
    std::cout << "\nTesting basic\n" << std::endl;
    basic.makeSound();

    std::cout << "\nDynamic allocation test\n" << std::endl;
    Animal *jojo = new Dog();
    delete jojo;
    std::cout << "\nProgram exiting\n" <<std::endl;
        
    return 0;
}

