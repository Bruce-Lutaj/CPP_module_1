#include "headers/PhoneBook.hpp"
#include <string>

PhoneBook::PhoneBook()
{
    index = 0;
}

void PhoneBook::Add()
{
    std::string data;
    std::string domain[5] = {"Name: ", "Lastname: ", "Nickname: ", "Number: ", "Secret: "};
    
    if (index == 8)
        index = 0;
    for (size_t j = 0; j < 5; j++)
    {
        std::cout << domain[j];
        std::getline(std::cin, data);
        contact[index].setData(data, j);
    }
    index++;
}