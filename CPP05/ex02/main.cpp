#include "headers/Bureaucrat.hpp"
#include "headers/AForm.hpp"
#include "headers/ShrubberyCreationForm.hpp"
#include "headers/RobotomyRequestForm.hpp"

int main()
{
    try
    {
        Bureaucrat                  Buro("Franco", 1);
        ShrubberyCreationForm       Paper("Document");
        RobotomyRequestForm         Paper_2("Android");

        std::cout << Buro;
        std::cout << Paper;
        std::cout << Paper_2;
        std::cout << Buro.getName() << " is trying to sign it." << std::endl;
        try 
        {
            //Buro.signForm(Paper);
            Buro.signForm(Paper_2);
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
            Buro.executeForm(Paper_2);
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