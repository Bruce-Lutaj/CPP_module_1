#include "headers/Bureaucrat.hpp"
#include "headers/AForm.hpp"
#include "headers/ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat                  Buro("Franco", 50);
        ShrubberyCreationForm       Paper("Document");

        std::cout << Buro;
        std::cout << Paper;
        std::cout << Buro.getName() << " is trying to sign it." << std::endl;
        try 
        {
            Buro.signForm(Paper);
        }
        catch (const AForm::GradeTooLowException& excpetionForm)
        {
            std::cerr << excpetionForm.what() << std::endl;
            if (!Paper.getIs_signed())
            {
                std::cerr << Buro.getName() << " couldn't sign " << Paper.getName() << " beacuse the grade was insufficient" << std::endl;
            }
        }
        std::cout << Buro.getName() << " is trying to execute it." << std::endl;
        try
        {
            Buro.executeForm(Paper);
        }
        catch (const AForm::GradeTooLowException& excpetionForm)
        {
            std::cerr << excpetionForm.what() << std::endl;
        }
    }
    catch (const Bureaucrat::GradeTooHighException& exceptionBuro) 
    {
        std::cerr << exceptionBuro.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException& exceptionBuro)
    {
        std::cerr << exceptionBuro.what() << std::endl;
    }
    catch (const AForm::GradeTooHighException& excpetionForm)
    {
        std::cerr << excpetionForm.what() << std::endl;
    }
    catch (const AForm::GradeTooLowException& excpetionForm)
    {
        std::cerr << excpetionForm.what() << std::endl;
    }
}