#include "headers/Animal.hpp"
#include "headers/Dog.hpp"
#include "headers/Cat.hpp"

int main()
{
    std::cout << "Subject tests\n" << std::endl;
    const Animal* i = new Dog();
    const Animal* j = new Cat();

    delete i;
    delete j;
    std::cout << "----------------------\n" << std::endl;
    
    std::cout << "Testing deep copy\n" << std::endl;
    Dog official;
    {
        std::cout << "\nCreating copy\n" << std::endl;
        Dog copy = official;
        std::cout << "\nDestroying copy\n" << std::endl;
    }
    std::cout << "\nTesting polymorphed function\n" << std::endl;
    official.makeSound(); 
    std::cout << "Creating array of Animal\n" << std::endl;
    const Animal* array[10];
    for (int idx = 0; idx < 10; idx++)
    {
        if (idx % 2 == 0)
        {
            array[idx] = new Dog();
        }
        else
        {
            array[idx] = new Cat();            
        }
    }
    for (int idx = 0; idx < 10; idx++)
    {
        delete array[idx];
    }
    return 0;
}

