#include "headers/Character.hpp"
#include "headers/ICharacter.hpp"

Character::Character(std::string str) : ICharacter()
{
    this->name = str;
    this->index = 0;
}

Character::Character(Character const & other) : ICharacter(other)
{
    for (int i = 0; i < 4; i++)
    {
        this->materia[i] = other.materia[i]->clone();
    }
    this->name = other.name;
    this->index = other.index;
    *this = other;
};

Character& Character::operator=(Character const & other)
{
    if (this != &other)
    {
        ICharacter::operator=(other);
        int i = 0;
        for (; i < 4; i++)
        {
            if (this->materia[i] == NULL)
            {
                break;
            }
            else 
            {
                delete this->materia[i];
            }
        }
        for (; i < 4; i++)
        {
            this->materia[i] = other.materia[i]->clone();
        }
        this->name = other.name;
    }
    return *this;
};

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (materia[i] == NULL)
        {
            break;
        }
        else 
        {
            delete materia[i];
        }
    }
};

std::string const& Character::getName() const
{
    return this->name;
};

void Character::equip(AMateria* m)
{
    if (this->index == 4)
    {
        std::cout << "Inventory full cannot add new materia" << std::endl;
        return ;
    }
    else 
    {
        materia[this->index] = m;
        this->index++;
    }
};
