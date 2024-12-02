#include <iostream>
#include <cctype> 

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
    }
    for (int i = 1; i < ac; i++)
    {
        for (size_t j = 0; av[i] && av[i][j]; j++)
            av[i][j] = std::toupper(static_cast<unsigned char>(av[i][j]));
        std::cout << av[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
