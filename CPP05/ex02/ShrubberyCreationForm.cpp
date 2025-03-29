#include "headers/ShrubberyCreationForm.hpp"
#include "headers/AForm.hpp"
#include "headers/Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target + "_shrubbery", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other.getName(), other.get_gradeToSign(), other.get_gradeToExec()) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

int ShrubberyCreationForm::execute(Bureaucrat const& executor)
{
    
}