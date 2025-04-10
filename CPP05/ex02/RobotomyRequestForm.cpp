#include "headers/RobotomyRequestForm.hpp"
#include "headers/AForm.hpp"
#include "headers/Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45) { std::srand((unsigned) time(NULL)); targetto = target;}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other.getName(), other.get_gradeToSign(), other.get_gradeToExec()) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string RobotomyRequestForm::getTarget() const
{
    return this->targetto;
}

int RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    int random = std::rand();

    if (this->getIs_signed() && executor.getGrade() <= this->get_gradeToExec())
    {
        std::cout << "Making some drilling noises!" << std::endl;
        if (!(random % 2))
        {
            std::cout << this->getTarget() << " got robotomized succesfully!" << std::endl;
        }
        else 
        {
            std::cerr << "Robotomy failed :(" << std::endl;
        }
    }
    else
    {
        throw GradeTooLowException();
        return 1;
    }
    return 0;
}
