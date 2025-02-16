#include "headers/Bureaucrat.hpp"
#include "headers/Form.hpp"

int main()
{
    try
    {
        Bureaucrat Buro("Franco", 50);
        Form       Form("Document", 45, 50);

        std::cout << Buro;
        std::cout << Form;
        Buro.signForm(Form);
    }
    catch (const Bureaucrat::GradeTooHighException& e) 
    {
        std::cerr << Bureaucrat::GradeTooHighException().what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << Bureaucrat::GradeTooLowException().what() << std::endl;
    }
    catch (const Form::GradeTooHighException& e)
    {
        std::cerr << Form::GradeTooHighException().what() << std::endl;
    }
    catch (const Form::GradeTooLowException& e)
    {
        std::cerr << Form::GradeTooLowException().what() << std::endl;
    }
}