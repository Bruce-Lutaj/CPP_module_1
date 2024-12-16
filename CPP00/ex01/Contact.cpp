#include "headers/Contact.hpp"
#include <cstddef>


Contact::Contact()
{
    for(int i = 0; i < 5; i++)
        str[i] = "";
}

void Contact::setData(const std::string& data, size_t j)
{
    str[j] = data;
}

void Contact::displayData() const
{
    std::string domain[5] = {"Name: ", "Lastname: ", "Nickname: ", "Number: ", "Secret: "};
    for (size_t j = 0; j < 5; j++)
        std::cout << domain[j] << str[j] << std::endl;
}
