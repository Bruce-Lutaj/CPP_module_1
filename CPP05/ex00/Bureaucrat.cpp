#include "Bureaucrat.hpp"

#include <exception>
#include <iomanip>
#include <iostream>
#include <string>
#include <exception>

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
    if (this->grade - 1 < 1)
    {
        throw GradeTooHighException();
    }
    this->grade -= 1;
}

void Bureaucrat::decreaseGrade()
{
    if (this->grade > 150)
    {
        throw GradeTooLowException();
    }
    this->grade += 1;
}

Bureaucrat::~Bureaucrat() {}

