#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : grade(150)
{

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

std::ostream & operator<<(std::ostream & source, Bureaucrat & target)
{
    source << target.getName() << ", bureaucrat grade " << target.getGrade();
    return (source);
}