#include <fstream>
#include <iostream>
#include <string>
#include <cstring>

int main(int ac, char **av)
{
    if (ac != 4)
        return std::cerr << "Wrong number of arguments" << std::endl, 0;
    std::ifstream file;
    file.open(av[1]);
    if(!file.is_open())
    {
        std::cerr << "Error opening file: " << av[1] << std::endl;
        if (file.bad())
        {
            std::cerr << "Fatal error: badbit is set." << std::endl;
        }
        if (file.fail())
        {
            std::cerr << "Error details: " << strerror(errno) << std::endl;
        }
        return 1;
    }
    file.close();
    return 0;
}