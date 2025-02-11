#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* materia_copy[4];
    public:
        ~MateriaSource() {}
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};