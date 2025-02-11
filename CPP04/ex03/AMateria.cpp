#include "headers/AMateria.hpp"

AMateria::AMateria(std::string const& type)
{
    this->type = type;
}

AMateria::AMateria(AMateria const &obj)
{
    *this = obj;
};

AMateria& AMateria::operator=(AMateria const & obj)
{
    if (this == &obj)
        return *this;
    this->type = obj.type;
    return *this;
}


AMateria::~AMateria()
{
};

std::string const& AMateria::getType() const
{
    return this->type;
}
