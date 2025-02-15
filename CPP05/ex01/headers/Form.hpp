#ifndef FORM_HPP
#define FORM_HPP

#include <exception>
#include <iomanip>
#include <iostream>
#include <string>
#include <exception>

class Form
{
    private:
        const std::string name;
        bool              is_signed;
        const int         grade_to_sign;
        const int         grade_to_exec;
    public:
        Form();
        Form(std::string str, int grade_Sign, int grade_Exec);
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form();
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Grade is too high!";
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Grade is too low!";
                }
        };
        std::string getName() const;
        bool getIs_signed() const;
        const int get_gradeToSign() const;
        const int get_gradeToExec() const;
};

std::ostream& operator<<(std::ostream& os, const Form& Form);


#endif