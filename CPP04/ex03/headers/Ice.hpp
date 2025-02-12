#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class ICharacter;
class AMateria;

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const & other);
        Ice& operator=(Ice const & other);
        ~Ice();
    
        std::string const& getType() const;
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif