#include "headers/Bureaucrat.hpp"
#include "headers/AForm.hpp"
#include "headers/ShrubberyCreationForm.hpp"
#include "headers/PresidentialPardonForm.hpp"
#include "headers/RobotomyRequestForm.hpp"
#include "headers/Intern.hpp"

int main()
{
    try
    {
        Bureaucrat  Buro("Johnny", 1);
        Intern      someRandomIntern;
        AForm*      rrf;
        
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        if (rrf)
        {
            std::cout << rrf->getName() << std::endl;
        }
        else 
        {
            delete rrf;
            return 1;
        }
        delete rrf;
    }
    catch (const std::exception& exception)
    {
        std::cerr << exception.what() << std::endl;
    }
}