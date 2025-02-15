#include "headers/Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat obj("Franco", 2);
        std::cout << obj;
        std::cout << "Increasing grade!" << std::endl;
        obj.increaseGrade();
        std::cout << obj.getName() << std::endl;
        std::cout << obj.getGrade() << std::endl;
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