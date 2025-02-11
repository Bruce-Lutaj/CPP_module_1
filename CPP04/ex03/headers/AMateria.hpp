#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <cstddef>
#include <string>
#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <ostream>
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria(std::string const& type);
        AMateria(AMateria const &obj);
        AMateria& operator=(AMateria const & obj);
        virtual ~AMateria();
        std::string const& getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif