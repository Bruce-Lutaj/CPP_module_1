#include "headers/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" <<std::endl;
}

Brain::Brain(const Brain& obj)
{
    *this = obj;
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& obj)
{
    if (this != &obj)
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = obj.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}