#include "headers/RobotomyRequestForm.hpp"
#include "headers/AForm.hpp"
#include "headers/Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other.getName(), other.get_gradeToSign(), other.get_gradeToExec()) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

int RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    if (this->getIs_signed() && executor.getGrade() <= this->get_gradeToExec())
    {
        std::cout << "Making some drilling noises!" << std::endl;
        if (!std::time() % 2)
        {
            std::cout << this->getName() << " got robotomized succesfully!" << std::endl;
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
