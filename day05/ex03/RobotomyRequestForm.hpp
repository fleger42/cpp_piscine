#ifndef ROBOTOMYREQUEST_FORM
#define ROBOTOMYREQUEST_FORM
#include <iostream>
#include <exception>
#include <stdlib.h>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
    public:
        virtual void execute(Bureaucrat const & executor) const;
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const & copy);
        virtual ~RobotomyRequestForm(void);
        RobotomyRequestForm & operator=(RobotomyRequestForm const & target);
    private:
        std::string target;
};
#endif