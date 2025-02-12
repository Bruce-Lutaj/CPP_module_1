#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* materias[4];
        int       n;

    public:
        MateriaSource();
        MateriaSource(MateriaSource const &other);
        MateriaSource& operator=(MateriaSource const &other);
        ~MateriaSource();
        void      learnMateria(AMateria* m);
        AMateria* createMateria(std::string const &type);
};

#endif