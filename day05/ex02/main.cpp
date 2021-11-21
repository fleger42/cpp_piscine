#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main (void)
{
    RobotomyRequestForm hey;
    Bureaucrat human(100, "Charli");

    human.signForm(hey);
    human.executeForm(hey);

    std::cout << std::endl << "Test two" << std::endl << std::endl;

    Bureaucrat human_two(46, "Brudda");

    human_two.executeForm(hey);
    human_two.signForm(hey);
    human_two.executeForm(hey);

    std::cout << std::endl << "Test three" << std::endl << std::endl;

    Bureaucrat human_three(45, "paul");

    human_three.signForm(hey);
    human_three.executeForm(hey);
}