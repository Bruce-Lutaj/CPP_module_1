#include "headers/Character.hpp"
#include "headers/AMateria.hpp"
#include "headers/ICharacter.hpp"

AMateria* Character::unequiped[10] = {NULL};
int Character::n_unequiped = 0;

Character::Character(std::string str) : ICharacter()
{
    this->name = str;
    this->n = 0;
    for (int i = 0; i < 4; i++)
    {
        this->materia[i] = NULL;
    }
}

Character::Character(Character const & other) : ICharacter(other)
{
    for (int i = 0; i < 4; i++)
    {
        materia[i] = NULL;    
    }
    for (int i = 0; i < 4; i++)
    {
        if (other.materia[i])
            materia[i] = other.materia[i]->clone();
    }
    this->name = other.name;
    this->n = other.n;
}

Character& Character::operator=(Character const & other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->materia[i])
            {
                delete this->materia[i];
            }
            this->materia[i] = NULL;
        }
        this->n = other.n;
        for (int i = 0; i < n; i++)
        {
            if (other.materia[i])
            {
                this->materia[i] = other.materia[i]->clone();
            }
        }
        this->name = other.name;
    }
    return *this;
};

Character::~Character()
{
    for (int i = 0; i < n; i++)
    {
        if (materia[i])
        {
            delete materia[i];
        }
    }
    clearUnequiped();
};

std::string const& Character::getName() const
{
    return this->name;
};

void Character::equip(AMateria* m)
{
    if (this->n == 4)
    {
        std::cout << "Inventory full cannot add new materia" << std::endl;
        return ;
    }
    else 
    {
        materia[this->n] = m;
        this->n++;
    }
};

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4 || !materia[idx])
        return ;
    if (n < 10)
    {
        unequiped[n_unequiped++] = materia[idx];
    }
    else
    {
        delete unequiped[0];
        for (int i = 0; i < 10 - 1; i++)
        {
            unequiped[i] = unequiped[i + 1];
        }
        unequiped[10 - 1] = materia[idx];
    }
    materia[idx] = NULL;
    if (idx == n - 1)
    {
        n -= 1;
    }
};

void Character::clearUnequiped()
{
    for (int i = 0; i < n_unequiped; i++)
    {
        if (unequiped[i])
        {
            delete unequiped[i];
        }

    }
    n_unequiped = 0;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4 || !materia[idx])
    {
        return;
    }
    materia[idx]->use(target);
}