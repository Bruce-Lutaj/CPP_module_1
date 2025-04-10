#include "headers/ShrubberyCreationForm.hpp"
#include "headers/AForm.hpp"
#include "headers/Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137) { targetto = target + "_shrubbery"; }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other.getName(), other.get_gradeToSign(), other.get_gradeToExec()) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

std::string ShrubberyCreationForm::getTarget() const
{
    return this->targetto;
}

void ShrubberyCreationForm::draw_tree(std::ofstream& os) const
{
    os <<"   ^   "<< std::endl;
    os <<"  ^^^  "<< std::endl;
    os <<" ^^^^^ "<< std::endl;
    os <<"^^^^^^^"<< std::endl;
    os <<"  |||  "<< std::endl;
    os <<"  |||  "<< std::endl;
}

int ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    if (this->getIs_signed() && executor.getGrade() <= this->get_gradeToExec())
    {
        std::ofstream new_file;
        new_file.open(this->getTarget().c_str());
        if(!new_file.is_open())
        {
            std::cerr << "Error opening new file" << std::endl;
            return 1;
        }
        draw_tree(new_file);
        new_file.close();
        return 0;
    }
    else
    {
        throw GradeTooLowException();
        return 1;
    }
    return 1;
}

