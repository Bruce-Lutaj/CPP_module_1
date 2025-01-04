#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define MaxContact 8

#define NUMBERS 0
#define LETTERS 1

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contact[MaxContact];
        size_t  index;
    public:
        PhoneBook();
        int     Add();
        long    Search();
        void    Show_Contact(long n);
};


#endif