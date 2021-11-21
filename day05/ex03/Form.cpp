#include "Form.hpp"
#include "Bureaucrat.hpp"

void Form::checkForm(Bureaucrat const & executor) const
{
    if(this->done == 0)
        throw FormNotSigned();
    if(executor.getGrade() > this->grade_exe)
        throw GradeTooLowException();
}

Form::Form(void) : name("empty"), grade_exe(150), grade_sign(150)
{
	done = 0;
    return ;    
}

Form::~Form(void)
{
    return ;    
}

Form::Form(std::string name, int grade_exe, int grade_sign) : name(name), grade_exe(grade_exe), grade_sign(grade_sign)
{
	done = 0;
    if(grade_exe > 150 || grade_sign > 150)
        throw GradeTooLowException();
    if(grade_exe < 1 || grade_sign < 1)
        throw GradeTooHighException();
    return ; 
}

Form::Form(Form const & copy) : name(copy.getName()), grade_exe(150), grade_sign(150)
{
	done = 0;
    *this = copy;
    return ; 
}

Form & Form::operator=(Form const & target)
{
    done = target.getState();
    return *this;    
}

std::string Form::getName(void) const
{
    return (name);
}

int Form::getGradeExe(void) const
{
    return (grade_exe);
}

int Form::getGradeSign(void) const
{
    return (grade_sign);
}

void Form::beSigned(Bureaucrat & human)
{
    if(done == 1)
        return ;
    if(human.getGrade() <= grade_sign)
        done = 1;
    else
        throw GradeTooLowException();
}

int Form::getState(void) const
{
    return (done);
}

std::ostream& operator<<(std::ostream& os, Form & target)
{
    os << "Form " << target.getName() << "is ";
    if (target.getState() == 1)
        os << "signed";
    else if (target.getState() == 0)
        os << "not signed";
    os << " and require execution grade level " << target.getGradeExe()
    << " and needs to be signed by a level " << target.getGradeSign() << " at least !" << std::endl;
	return (os);
}
