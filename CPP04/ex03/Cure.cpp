#include "headers/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const & obj) : AMateria(obj)
{
}

Cure::~Cure()
{
}

Cure& Cure::operator=(Cure const &obj)
{
    if (this != &obj)
    {
        AMateria::operator=(obj);
    }
    return *this;
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}