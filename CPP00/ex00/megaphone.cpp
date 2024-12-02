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
        for (int j = 0; av[i] && av[i][j]; j++)
            av[i][j] = std::toupper(av[i][j]);
        std::cout << av[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
