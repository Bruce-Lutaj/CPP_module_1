#ifndef BURECRAUT_HPP
#define BURECRAUT_HPP

#include <exception>
#include <iomanip>
#include <iostream>
#include <string>
#include <exception>

class AForm;

class Bureaucrat
{
    private:
        const std::string name;
        int               grade;
        Bureaucrat();
        Bureaucrat& operator=(Bureaucrat const &other);
    public:
        Bureaucrat(std::string _name, int _grade);
        Bureaucrat(Bureaucrat const &other);
        ~Bureaucrat();
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
        int getGrade() const;
        void increaseGrade();
        void decreaseGrade();
        void signForm(AForm& form);
        void executeForm(AForm const& from) const;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bureaucrat);

#endif