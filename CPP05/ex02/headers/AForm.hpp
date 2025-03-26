#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class AForm
{
    private:
        const std::string name;
        bool              is_signed;
        const int         grade_to_sign;
        const int         grade_to_exec;
        AForm();
        AForm& operator=(const AForm& other);
    public:
        AForm(std::string str, int grade_Sign, int grade_Exec);
        AForm(const AForm& other);
        virtual ~AForm();
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Grade for the form is too high!";
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Grade for the form is too low!";
                }
        };
        std::string getName() const;
        bool getIs_signed() const;
        int get_gradeToSign() const;
        int get_gradeToExec() const;
        int beSigned(Bureaucrat& Buro);
        virtual int execute(Bureaucrat const& executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& AForm);

#endif