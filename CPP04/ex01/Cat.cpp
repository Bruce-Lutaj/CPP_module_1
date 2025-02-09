#include "headers/Cat.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
    this->brain = new Brain(*(obj.brain));
    this->type = obj.type;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
    if (this != &obj)
    {
        Animal::operator=(obj);
        delete this->brain;
        this->brain = new Brain(*(obj.brain));
        this->type = obj.type;
    }
    return *this;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miao Miao" << std::endl;
}