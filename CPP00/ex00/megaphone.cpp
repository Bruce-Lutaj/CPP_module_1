#include <iostream>
#include <cctype> 

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
    }
    for (int i = 1; i < ac; i++)
    {
        std::string tmp = av[i];
        for (size_t j = 0; j < tmp.size(); j++)
            tmp[j] = std::toupper(static_cast<unsigned char>(tmp[j]));
        std::cout << tmp << " ";
    }
    std::cout << std::endl;
    return 0;
}
