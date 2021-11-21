#ifndef SHRUBBERYCREATION_FORM
#define SHRUBBERYCREATION_FORM
#include <iostream>
#include <exception>
#include "Form.hpp"
#include <fstream>
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
    public:
        virtual void execute(Bureaucrat const & executor) const;
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const & copy);
        virtual ~ShrubberyCreationForm(void);
        ShrubberyCreationForm & operator=(ShrubberyCreationForm const & target);
    private:
        std::string target;
};
#endif