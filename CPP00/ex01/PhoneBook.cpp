#include "headers/PhoneBook.hpp"
#include <cctype>
#include <ostream>
#include <string>



bool Is_Valid(std::string data, int type)
{
    bool alpha = false;
    
    if (data.empty())
        return false;
    if (type == NUMBERS)
    {
        for (int i = 0; i < data.size(); i++)
        {
            if(!std::isdigit(data[i]))
                return false;
        }
        return true;
    }
    else
    {
        for (int i = 0; i < data.size(); i++)
        {
            if (std::isalpha(data[i]))
                alpha = true;
            else if (!std::isspace(data[i]))
                return false;
        }
    }
    return alpha;
}

PhoneBook::PhoneBook()
{
    index = 0;
}

int PhoneBook::Add()
{
    std::string data;
    std::string domain[5] = {"Name: ", "Lastname: ", "Nickname: ", "Number: ", "Darkest Secret: "};
    
    if (index == MaxContact)
        index = 0;
    contact[index].setIndex(index);
    for (size_t j = 0; j < 5; j++)
    {
        std::cout << domain[j];
        std::getline(std::cin, data);
        if (domain[j] == "Number: ")
        {
            if (!Is_Valid(data, NUMBERS))
                return std::cout << "Invalid input" << std::endl, -1;
        }
        contact[index].setData(data, j);
    }
    index++;
    return 0;
}

long PhoneBook::Search()
{
    std::string domain[4] = {"Index", "Name", "Lastname", "Nickname"};
    std::string input;
    char*       endptr;
    long        n;

    for (size_t i = 0; i < 4; i++)
        std::cout << std::setw(MaxLen) << std::right << domain[i] << '|';
    std::cout << std::endl << "--------------------------------------------" << std::endl;
    for (size_t i = 0; i < MaxContact; i++)
        contact[i].displayContact(i);
    std::cout << "Insert index for more detail: ";
    std::getline(std::cin, input);
    if (input == "\0")
        return std::cout << "Invalid input" << std::endl, -1;
    n = strtol(input.c_str(), &endptr, 10);
    if (n > MaxContact)
        return std::cout << "Invalid input" << std::endl, -1;
    if (*endptr == '\0')
        return n;
    else
        return std::cout << "Invalid input" << std::endl, -1;
}

void PhoneBook::Show_Contact(long n)
{
    contact[n].displayData();
}