#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contact[8];
        size_t  index;
    public:
        PhoneBook();
        void Add();
//         void Search();
//         void Exit();
};


#endif