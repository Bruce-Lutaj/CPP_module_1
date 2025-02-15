#ifndef BURECRAUT_HPP
#define BURECRAUT_HPP

#include <exception>
#include <iomanip>
#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
    private:
        const std::string name;
        int               grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string _name, int _grade);
        Bureaucrat(Bureaucrat const &other);
        Bureaucrat& operator=(Bureaucrat const &other);
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
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bureaucrat);

#endif