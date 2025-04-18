#include "headers/Cure.hpp"
#include "headers/AMateria.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const &other) : AMateria(other.getType())
{
}

Cure& Cure::operator=(Cure const &other)
{
    if (this != &other)
    {
        AMateria::operator=(other);
    }
    return *this;
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

std::string const& Cure::getType() const
{
    return this->type;
};