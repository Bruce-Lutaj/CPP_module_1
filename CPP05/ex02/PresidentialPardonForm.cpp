#include "headers/PresidentialPardonForm.hpp"
#include "headers/AForm.hpp"
#include "headers/Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5) {targetto = target;}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other.getName(), other.get_gradeToSign(), other.get_gradeToExec()) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

std::string PresidentialPardonForm::getTarget() const
{
    return this->targetto;
}

int PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    if (this->getIs_signed() && executor.getGrade() <= this->get_gradeToExec())
    {
        std::cout << this->getTarget() << " is been pardoned by Zaphod Beeblebrox" << std::endl;
    }
    else
    {
        throw GradeTooLowException();
        return 1;
    }
    return 0;
}
