#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <cstddef>
#include <string>
#include <iostream>

class Contact
{
    private:
        std::string str[5];
    public:
        Contact();
        void setData(const std::string& data, size_t j);
        void displayData() const;
};

#endif
