#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria    *materia[4];
        int         index;
    public:
        Character(std::string str);
        Character(Character const & other);
        Character& operator=(Character const & other);
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};