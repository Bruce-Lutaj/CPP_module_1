#include "headers/Bureaucrat.hpp"
#include "headers/AForm.hpp"

std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bureaucrat)
{
    os << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << std::endl;
    return os;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name)
{
    if (_grade < 1)
    {
        throw GradeTooHighException();
    }
    else if (_grade > 150)
    {
        throw GradeTooLowException();
    }
    this->grade = _grade;
};

Bureaucrat::Bureaucrat(Bureaucrat const &other) : name(other.name)
{
    this->grade = other.grade;
}

std::string Bureaucrat::getName() const
{
    return this->name;
};

int Bureaucrat::getGrade() const
{
    return this->grade;
};

void Bureaucrat::increaseGrade()
{
    if ((this->grade - 1) < 1)
    {
        throw GradeTooHighException();
    }
    this->grade -= 1;
}

void Bureaucrat::decreaseGrade()
{
    if ((this->grade + 1) > 150)
    {
        throw GradeTooLowException();
    }
    this->grade += 1;
}

void Bureaucrat::signForm(AForm& form)
{
    if (form.beSigned(*this) == 1)
    {
        std::cout << this->name << " signed " << form.getName() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const& form) const
{
    if (!form.execute(*this))
    {
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    }
    else 
    {
        std::cerr << this->getName() << " could not execute" << std::endl; 
    }
}


Bureaucrat::~Bureaucrat() {}

