#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        ShrubberyCreationForm();
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        ~ShrubberyCreationForm();
        int execute(Bureaucrat const& executor);
};

#endif