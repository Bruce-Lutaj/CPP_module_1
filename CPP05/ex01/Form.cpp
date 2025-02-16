#include "headers/Form.hpp"
#include <ios>

std::ostream& operator<<(std::ostream& os, const Form& Form)
{
    os << "This form's name is " << Form.getName() << ". Is it signed? " << std::boolalpha << Form.getIs_signed() << std::endl
    << "To be signed you need this grade: " << Form.get_gradeToSign() << std::endl
    <<"To be executed you need this grade: " << Form.get_gradeToExec() << std::endl;
    return os;
}

Form::Form(std::string str, int grade_Sign, int grade_Exec) : name(str), grade_to_sign(grade_Sign), grade_to_exec(grade_Exec)
{
    if (grade_Sign < 1 || grade_Exec < 1)
    {
        throw Form::GradeTooHighException();
    }
    else if (grade_Sign > 150 || grade_Exec > 150) 
    {
        throw Form::GradeTooLowException();    
    }
    this->is_signed = false;
}

Form::Form(Form const &other) : name(other.name), grade_to_sign(other.grade_to_sign), grade_to_exec(other.grade_to_exec)
{
    this->is_signed = other.is_signed;
}

Form::~Form() {}

std::string Form::getName() const
{
    return this->name;
}

bool Form::getIs_signed() const
{
    return this->is_signed;
}

int Form::get_gradeToSign() const
{
    return this->grade_to_sign;
}

int Form::get_gradeToExec() const
{
    return this->grade_to_exec;
}

int Form::beSigned(Bureaucrat& Buro)
{
    if (Buro.getGrade() <= this->grade_to_sign)
    {
        this->is_signed = true;
        return 1; 
    }
    else 
    {
        throw Form::GradeTooLowException();
        return -1;
    }
    return -1;
}