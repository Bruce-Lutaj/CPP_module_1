#include "replace.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
        return std::cerr << "Input error: example use <file name> <string to be replaced> <string to replace with>" << std::endl, 0;
    
    std::string file_name = av[1];
    std::string to_replace = av[2];
    std::string replace_with = av[3];
    std::ifstream file;
    
    file.open(file_name);
    if(!file.is_open())
    {
        std::cerr << "Error opening file: " << file_name << std::endl;
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
    
    /////////////
    file.close();
    return 0;
}