#include "headers/MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource()
{
    this->n = 0;
    for (int i = 0; i < 4; i++)
    {
        this->materias[i] = NULL;
    }
}

MateriaSource::MateriaSource(MateriaSource const & other) : IMateriaSource(other)
{
    this->n = 0;
    for (int i = 0; i < 4; i++)
    {
        this->materias[i] = NULL;
    }
    *this = other;
}


MateriaSource& MateriaSource::operator=(MateriaSource const & other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->materias[i])
            {
                delete this->materias[i];
            }
            this->materias[i] = NULL;
        }
        this->n = other.n;
        for (int i = 0; i < n; i++)
        {
            if (other.materias[i])
            {
                this->materias[i] = other.materias[i]->clone();
            }
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (materias[i])
        {
            delete materias[i];
        }
    }
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (m == NULL || n >= 4)
    {
        delete m;
        return;
    }
    materias[n] = m->clone();
    delete m;
    n++;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < n; i++)
    {
        if (materias[i] && materias[i]->getType() == type)
            return materias[i]->clone();
    }
    return NULL;
}

