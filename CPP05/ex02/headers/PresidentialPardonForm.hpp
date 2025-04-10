#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string targetto;
        PresidentialPardonForm();
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& other);
        ~PresidentialPardonForm();
        std::string getTarget() const;
        virtual int execute(Bureaucrat const& executor) const;
};

#endif