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
        std::getline(std::cin, input);
        if (input == "ADD")
            obj.Add();
        if (input == "SEARCH")
        {
            n = obj.Search();
            if (n == -1)
                return 1;
            obj.Show_Contact(n);
        }
        if (input == "EXIT")
            break ;
    }
    return 0;
}