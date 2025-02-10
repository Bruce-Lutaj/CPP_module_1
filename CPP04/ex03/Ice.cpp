#include "headers/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const & obj) : AMateria(obj)
{
}

Ice::~Ice()
{
}

Ice& Ice::operator=(Ice const &obj)
{
    if (this != &obj)
    {
        AMateria::operator=(obj);
    }
    return *this;
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}