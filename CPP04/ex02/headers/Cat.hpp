#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* brain;
    public:
        Cat();
        Cat(const Cat &obj);
        Cat& operator=(const Cat& obj);
        virtual ~Cat();
        void makeSound() const;
};

#endif