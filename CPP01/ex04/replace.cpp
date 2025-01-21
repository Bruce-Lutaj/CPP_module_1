#include "replace.hpp"

std::string replace(std::string line, std::string to_replace, std::string replace_with)
{
    if (to_replace.empty() || to_replace.length() > line.length())
        return line;
    std::string new_line;
    size_t start_pos = 0;
    size_t pos;
    while((pos = line.find(to_replace, start_pos)) != std::string::npos)
    {       
        new_line += line.substr(start_pos, pos - start_pos);     
        new_line += replace_with;     
        start_pos = pos + to_replace.length();
    }
    new_line += line.substr(start_pos);
    return new_line;
}