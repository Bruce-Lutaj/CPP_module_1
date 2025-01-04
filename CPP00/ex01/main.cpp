#include "headers/PhoneBook.hpp"

int main()
{
    PhoneBook   obj;
    std::string input;
    long        n;

    std::cout << "Welcome to the PhoneBook" << std::endl;
    while (1)
    {
        std::cout << "To use type: | ADD - SEARCH - EXIT |" << std::endl;
        if (!std::getline(std::cin, input))
            break ;
        if (input == "ADD")
        {
            if(obj.Add() == -1)
            {
                if (!std::cin)
                    break;
                continue;
            }
        }
        if (input == "SEARCH")
        {
            n = obj.Search();
            if (n == -1)
            {
                if (!std::cin)
                    break ;
                continue;
            }
            obj.Show_Contact(n);
        }
        else if (input == "EXIT")
            break ;
        else
        {
            std::cout << "Invalid input" << std::endl;
            continue;
        }
    }
    return 0;
}