#include "headers/Animal.hpp"
#include "headers/Dog.hpp"
#include "headers/Cat.hpp"

int main()
{
    Dog basic;
    std::cout << "\nStarting scope test\n" << std::endl;
    {
        std::cout << "Creating tmp dog" << std::endl;
        Dog tmp = basic;
        std::cout << "Leaving tmp dog scope" << std::endl;
    }
    std::cout << "\nAfter scope, basic dog should still work:" << std::endl;
    basic.makeSound();
        
    return 0;
}

