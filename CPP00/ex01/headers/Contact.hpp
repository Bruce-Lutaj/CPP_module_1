#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <cstddef>
#include <string>
#include <iostream>

class Contact
{
    private:
        std::string str[5];
        size_t      index;
    public:
        Contact();
        void setData(const std::string& data, size_t j);
        void setIndex(size_t i);
        void displayData() const;
        void displayContact() const;
};

#endif
