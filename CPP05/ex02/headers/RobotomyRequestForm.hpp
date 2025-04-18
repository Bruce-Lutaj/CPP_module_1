#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
    private:
        std::string targetto;
        RobotomyRequestForm();
        RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& other);
        ~RobotomyRequestForm();
        std::string getTarget() const;
        virtual int execute(Bureaucrat const& executor) const;
};

#endif