#include "headers/Bureaucrat.hpp"
#include "headers/AForm.hpp"
#include "headers/PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat                  Buro("Franco", 1);
        PresidentialPardonForm      Document("Prisoner");

        std::cout << Buro;
        std::cout << Document;
        std::cout << Buro.getName() << " is trying to sign it." << std::endl;
        try 
        {
            Buro.signForm(Document);
        }
        catch (const AForm::GradeTooLowException& excpetionForm)
        {
            std::cerr << excpetionForm.what() << std::endl;
            if (!Document.getIs_signed()) 
            {
                std::cerr << Buro.getName() << " couldn't sign " << Document.getName() << " beacuse the grade was insufficient" << std::endl;
            }
        }
        std::cout << Buro.getName() << " is trying to execute it." << std::endl;
        try
        {
            Buro.executeForm(Document);
        }
        catch (const AForm::GradeTooLowException& excpetionForm)
        {
            std::cerr << excpetionForm.what() << std::endl;
        }
    }
    catch (const std::exception& exception)
    {
        std::cerr << exception.what() << std::endl;
    }
}