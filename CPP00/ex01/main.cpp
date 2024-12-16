#include "headers/PhoneBook.hpp"

int main()
{
    PhoneBook   obj;
    std::string input;
    std::cout << "Welcome to the PhoneBook\n" << "To use type: ADD, SEARCH, EXIT";
    while (1)
    {
        std::getline(std::cin, input);
        if (input == "ADD")
            obj.Add();
    }
    return 0;
}