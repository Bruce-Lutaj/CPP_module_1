#include "headers/Form.hpp"

std::ostream& operator<<(std::ostream& os, const Form& Form)
{
    os << "This form's name is " << Form.getName() << ". Is it signed?" << Form.getIs_signed() << std::endl
    << "To be signed you need this grade: " << Form.get_gradeToSign() << std::endl
    <<"To be executed you need this grade: " << Form.get_gradeToExec() << std::endl;
    return os;
}

Form::Form(std::string str, int grade_Sign, int grade_Exec) : name(str), grade_to_sign(grade_Sign), grade_to_exec(grade_Exec)
{
    this->is_signed = false;
}

Form::Form(Form const &other) : name(other.name), grade_to_sign(other.grade_to_sign), grade_to_exec(other.grade_to_exec)
{
    *this = other;
}


std::string Form::getName() const
{
    return this->name;
}

bool Form::getIs_signed() const
{
    return this->is_signed;
}

const int Form::get_gradeToSign() const
{
    return this->grade_to_sign;
}

const int Form::get_gradeToExec() const
{
    return this->grade_to_exec;
}