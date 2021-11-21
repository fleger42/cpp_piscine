#include "RobotomyRequestForm.hpp"

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    this->checkForm(executor);
    srand (time(NULL));

    if(rand() % 2 == 1)
        std::cout << "Bzzz Bzz ! " << executor.getName() << " has been forgiven by Zafod Beeblebrox." << std::endl;
    else
        std::cout << executor.getName() << " could not be forgiven by Zafod Beeblebrox." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(void) : Form("ShruberryCreationForm", 45, 72), target("")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("ShruberryCreationForm", 45, 72), target(target)
{

}


RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy)
{
    *this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{

}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & target)
{
    this->target  = target.target;
	return (*this);
}