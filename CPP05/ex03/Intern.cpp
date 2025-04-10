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

AForm* createShrubbery(std::string target) {return new ShrubberyCreationForm(target);}
AForm* createRobotomy(std::string target) {return new RobotomyRequestForm(target);}
AForm* createPresidential(std::string target) {return new PresidentialPardonForm(target);}

AForm* Intern::makeForm(std::string form, std::string target)
{
    void (AForm::*ptr[3])(std::string target) = {&createShrubbery(target), createRobotomy(target), createPresidential(target)};
}

