#include "headers/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
    *this = obj;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
    if (this == &obj)
        return *this;
    this->type = obj.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal generic sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    if (type == "")
    {
        return ("WrongAnimal");
    }
    else 
    {
        return (this->type); 
    }
    return "WrongAnimal";
}