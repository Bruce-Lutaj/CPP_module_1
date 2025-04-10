#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

class Intern
{
    public:
        Intern();
        Intern& operator=(const Intern& other);
        Intern(const Intern& other);
        ~Intern();
        AForm* makeForm(std::string form, std::string target);
};

#endif