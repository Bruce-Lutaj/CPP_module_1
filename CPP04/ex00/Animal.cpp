#include "headers/Animal.hpp"

Animal::Animal()
{
    this->type = "";
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& obj)
{
    *this = obj;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& obj)
{
    if (this == &obj)
        return *this;
    this->type = obj.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal generic sound" << std::endl;
}

std::string Animal::getType() const
{
    if (this->type == "")
    {
        return ("Animal");
    }
    else 
    {
        return (this->type); 
    }
    return "Animal";
}