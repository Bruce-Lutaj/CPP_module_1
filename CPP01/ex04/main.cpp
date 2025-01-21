#include "replace.hpp"
#include <fstream>
#include <ostream>

int main(int ac, char **av)
{
    if (ac != 4)
        return std::cerr << "Input error: example use <file name> <string to be replaced> <string to replace with>" << std::endl, 0;
    
    std::string file_name = av[1];
    std::string to_replace = av[2];
    std::string replace_with = av[3];
    std::string line;
    std::string new_line;
    std::string new_file_name = file_name + ".replace";
    
    std::ifstream file;
    std::ofstream new_file;

    file.open(file_name.c_str());
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
    if (file.peek() == std::ifstream::traits_type::eof())
    {
        std::cerr << "Error: File is empty" << std::endl;
        file.close();
        return 1;
    }
    new_file.open(new_file_name.c_str());
    if(!new_file.is_open())
    {
        std::cerr << "Error opening new file" << std::endl;
        file.close();
        return 1;
    }
    while (std::getline(file, line))
    {
        new_line = replace(line, to_replace, replace_with);
        new_file << new_line << std::endl;
    }
    file.close();
    new_file.close();
    return 0;
}