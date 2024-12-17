#include "headers/Contact.hpp"
#include <cstddef>
#include <ostream>


Contact::Contact()
{
    index = 0;
    for(int i = 0; i < 5; i++)
        str[i] = "";
}

void Contact::setData(const std::string& data, size_t j)
{
    str[j] = data;
}

void Contact::setIndex(size_t i)
{
    index = i;
}


void Contact::displayData() const
{
    std::string domain[5] = {"Name: ", "Lastname: ", "Nickname: ", "Number: ", "Secret: "};
    for (size_t j = 0; j < 5; j++)
        std::cout << domain[j] << str[j] << std::endl;
}

void Contact::displayContact() const
{
    char    truncate[3][MaxLen + 1];

    for (size_t i = 0; i < 3; i++)
    {
        if (str[i].size() > MaxLen)
        {
            std::strncpy(truncate[i], str[i].c_str(), MaxLen - 1);
            truncate[i][MaxLen] = '.';
            truncate[i][MaxLen] = '\0';
        }
        else
        {
            std::strncpy(truncate[i], str[i].c_str(), std::size(str[i]));
            truncate[i][str[i].size()] = '\0';
        }
    }
    for (size_t i = 0; i < 3; i++)
        std::cout << std::setw(MaxLen) << std::right << truncate[i] << '|';
    std::cout << std::endl;
}
