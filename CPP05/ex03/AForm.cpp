#include "headers/AForm.hpp"

std::ostream& operator<<(std::ostream& os, const AForm& AForm)
{
    os << "This form's name is " << AForm.getName() << ". Is it signed? " << std::boolalpha << AForm.getIs_signed() << std::endl
    << "To be signed you need this grade: " << AForm.get_gradeToSign() << std::endl
    << "To be executed you need this grade: " << AForm.get_gradeToExec() << std::endl;
    return os;
}

AForm::AForm(std::string str, int grade_Sign, int grade_Exec) : name(str), grade_to_sign(grade_Sign), grade_to_exec(grade_Exec)
{
    if (grade_Sign < 1 || grade_Exec < 1)
    {
        throw AForm::GradeTooHighException();
    }
    else if (grade_Sign > 150 || grade_Exec > 150) 
    {
        throw AForm::GradeTooLowException();    
    }
    this->is_signed = false;
}

AForm::AForm(AForm const &other) : name(other.name), grade_to_sign(other.grade_to_sign), grade_to_exec(other.grade_to_exec)
{
    this->is_signed = other.is_signed;
}

AForm::~AForm() {}

std::string AForm::getName() const
{
    return this->name;
}

bool AForm::getIs_signed() const
{
    return this->is_signed;
}

int AForm::get_gradeToSign() const
{
    return this->grade_to_sign;
}

int AForm::get_gradeToExec() const
{
    return this->grade_to_exec;
}

int AForm::beSigned(Bureaucrat& Buro)
{
    if (Buro.getGrade() <= this->grade_to_sign)
    {
        this->is_signed = true;
        return 1; 
    }
    else 
    {
        throw AForm::GradeTooLowException();
        return -1;
    }
    return -1;
}