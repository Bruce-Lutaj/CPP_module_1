#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat obj("Franco", 2);
        Bureaucrat copy(obj);
        std::cout << copy;
        std::cout << "Increasing grade!" << std::endl;
        copy.increaseGrade();
        // std::cout << "Increasing grade!" << std::endl;
        // copy.increaseGrade();
        std::cout << "Name: " << copy.getName() << std::endl;
        std::cout << "Grade: " << copy.getGrade() << std::endl;
    }
    catch (const Bureaucrat::GradeTooHighException& exceptionBuro) 
    {
        std::cerr << exceptionBuro.what() << std::endl;
        return 1;
    }
    catch (const Bureaucrat::GradeTooLowException& exceptionBuro)
    {
        std::cerr << exceptionBuro.what() << std::endl;
        return 1;
    }
    return 0;
}