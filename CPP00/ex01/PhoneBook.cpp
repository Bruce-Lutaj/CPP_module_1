#include "headers/PhoneBook.hpp"
#include <string>

PhoneBook::PhoneBook()
{
    i = 0;
}

void PhoneBook::Add()
{
    std::string data;
    std::string domain[5] = {"Name: ", "Lastname: ", "Nickname: ", "Number: ", "Darkest Secret: "};
    
    if (i == 8)
        i = 0;
    contact[i].setIndex(i);
    for (size_t j = 0; j < 5; j++)
    {
        std::cout << domain[j];
        std::getline(std::cin, data);
        contact[i].setData(data, j);
    }
    i++;
}

void PhoneBook::Search()
{
    
}