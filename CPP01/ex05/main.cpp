#include "headers/Harl.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cerr << "Error: Example of use: <program> <level of complain(DEBUG, INFO, WARNING or ERROR)>" << std::endl;
        return 1;
    }
    else 
    {
        Harl obj;
        obj.complain(av[1]);
    }
    return 0;
}