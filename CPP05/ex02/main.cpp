#include "headers/Bureaucrat.hpp"
#include "headers/AForm.hpp"
#include "headers/ShrubberyCreationForm.hpp"
#include "headers/RobotomyRequestForm.hpp"
#include "headers/PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat                  Buro("Franco", 1);
        ShrubberyCreationForm       Document("Home");
        RobotomyRequestForm         Document_2("Robot");
        PresidentialPardonForm      Document_3("John");


        std::cout << Buro;
        std::cout << Document;
        //std::cout << Document_2;
        //std::cout << Document_3;
        std::cout << Buro.getName() << " is trying to sign it." << std::endl;
        try 
        {
            Buro.signForm(Document);
            //Buro.signForm(Document_2);
           // Buro.signForm(Document_3);
        }
        catch (const AForm::GradeTooLowException& excpetionForm)
        {
            std::cerr << excpetionForm.what() << std::endl;
            if (!Document.getIs_signed()) 
            //if(!Document_2.getIs_signed())
            //if(!Document_3.getIs_signed())
            {
                std::cerr << Buro.getName() << " couldn't sign " << Document.getName() << " beacuse the grade was insufficient" << std::endl;
                //std::cerr << Buro.getName() << " couldn't sign " << Document_2.getName() << " beacuse the grade was insufficient" << std::endl;
                //std::cerr << Buro.getName() << " couldn't sign " << Document_3.getName() << " beacuse the grade was insufficient" << std::endl;
            }
        }
        std::cout << Buro.getName() << " is trying to execute it." << std::endl;
        try
        {
            Buro.executeForm(Document);
            //Buro.executeForm(Document_2);
            //Buro.executeForm(Document_3);
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