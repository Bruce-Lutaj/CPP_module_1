#include "headers/Ice.hpp"
#include "headers/AMateria.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const &other) : AMateria(other.getType())
{
}

Ice& Ice::operator=(Ice const &other)
{
    this->type = other.type;
    return *this;
}

Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

std::string const& Ice::getType() const
{
    return this->type;
};