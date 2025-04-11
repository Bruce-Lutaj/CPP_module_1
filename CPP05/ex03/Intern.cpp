#include "headers/Intern.hpp"
#include "headers/PresidentialPardonForm.hpp"
#include "headers/RobotomyRequestForm.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern& other) { *this = other; }

Intern& Intern::operator=(const Intern& other) 
{
    if (this != &other)
        Intern::operator=(other);
    return *this;
}

AForm* Intern::createShrubbery(std::string target) {return new ShrubberyCreationForm(target);}
AForm* Intern::createRobotomy(std::string target) {return new RobotomyRequestForm(target);}
AForm* Intern::createPresidential(std::string target) {return new PresidentialPardonForm(target);}

AForm* Intern::makeForm(std::string form, std::string target)
{
    AForm* (Intern::*ptr[3])(std::string target) = {&Intern::createShrubbery, &Intern::createRobotomy, &Intern::createPresidential};
    std::string form_type[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    
    for (int i = 0; i < 3; i++)
    {
        if (form_type[i] == form)
        {
            std::cout << "Intern creates " << form_type[i] << std::endl;
            return (this->*(ptr[i]))(target);
        }
    }
    std::cout << "Type of form doesn exist" << std::endl;
    return NULL;
}

