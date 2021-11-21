#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void)
{

}

void Bureaucrat::executeForm (Form const & form_name)
{
    try
    {
        form_name.execute(*this);
        std::cout << "<bureaucrate> " << this->name << " executs <form> " << form_name.getName() << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << "<bureaucrate> " << this->name << " cannot executs <form> " << form_name.getName() << " because : " << e.what() << std::endl;
    }
}

Bureaucrat::Bureaucrat(int grade, std::string name) : name(name)
{
    if(grade < 1)
    {
        throw GradeTooHighException();
    }
    else if(grade > 150)
    {
        throw GradeTooLowException();
    }
    else
    {
        this->grade = grade;
    }
}

Bureaucrat::~Bureaucrat(void)
{

}

Bureaucrat::Bureaucrat(Bureaucrat const & to_copy)
{
    *this = to_copy;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & target)
{
    this->grade = target.getGrade();
    return *this;
}

std::string Bureaucrat::getName(void) const
{
    return (name);
}

int Bureaucrat::getGrade(void) const
{
    return (grade);
}

void Bureaucrat::increment(void)
{
    if(grade <= 1)
    {
        throw GradeTooHighException();
    }
    grade--;
}

void Bureaucrat::decrement(void)
{
    if(grade >= 150)
    {
        throw GradeTooLowException();
    }
    grade++;
}

void Bureaucrat::signForm(Form & to_sign)
{
    if(to_sign.getState() == 1)
    {
        std::cout << "<bureaucrate> " << this->name << " cannot sign <form> " << to_sign.getName() << " because it is already signed." << std::endl; 
        return ;
    }
    try
    {
        to_sign.beSigned(*this); 
        std::cout << "<bureaucrate> " << this->name << " signs <form> " << to_sign.getName() << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << "<bureaucrate> " << this->name << " cannot sign <form> " << to_sign.getName() << " because : " << e.what() << std::endl;
    }
    return ;
}

std::ostream & operator<<(std::ostream & source, Bureaucrat & target)
{
    source << target.getName() << ", bureaucrat grade " << target.getGrade();
    return (source);
}