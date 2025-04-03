#include "headers/RobotomyRequestForm.hpp"
#include "headers/AForm.hpp"
#include "headers/Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target + "_shrubbery", 145, 137) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other.getName(), other.get_gradeToSign(), other.get_gradeToExec()) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

int RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    std::cout << "Making some drilling noises!" << std::endl;
    if (!(rand() % 2))
    {
        std::cout << this->getName() << " got robotomized succesfully!" << std::endl;
    }
    else 
    {
        std::cerr << "Robotomy failed :(" << std::endl;
    }
}
