#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class ICharacter;
class AMateria;

class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure const &other);
        Cure& operator=(Cure const & other);
        ~Cure();
    
    
        std::string const& getType() const;
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif