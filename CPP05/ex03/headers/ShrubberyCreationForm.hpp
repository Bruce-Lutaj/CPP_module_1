#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
        std::string targetto;
        ShrubberyCreationForm();
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        ~ShrubberyCreationForm();
        std::string getTarget() const;
        virtual int execute(Bureaucrat const& executor) const;
        void draw_tree(std::ofstream& os) const;
};

#endif