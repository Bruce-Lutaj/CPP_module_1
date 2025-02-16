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
        std::cout << copy.getName() << std::endl;
        std::cout << copy.getGrade() << std::endl;
    }
    catch (const Bureaucrat::GradeTooHighException& e) 
    {
        std::cerr << Bureaucrat::GradeTooHighException().what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << Bureaucrat::GradeTooLowException().what() << std::endl;
    }
}