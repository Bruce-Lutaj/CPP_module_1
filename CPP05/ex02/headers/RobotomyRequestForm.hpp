#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class RobotomyRequestForm : public AForm
{
    private:
    RobotomyRequestForm();
    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& other);
    ~RobotomyRequestForm();
    virtual int execute(Bureaucrat const& executor) const;
};

#endif