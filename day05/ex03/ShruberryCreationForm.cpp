#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    this->checkForm(executor);
	std::string file_name = executor.getName() + "_shruberry";
    std::ofstream file(file_name.c_str());
    file << "       _-_" << std::endl;
    file << "    /~~   ~~\\" << std::endl;
    file << " /~~         ~~\\" << std::endl;
    file << "{               }" << std::endl;
    file << " \\  _-     -_  /" << std::endl;
    file << "   ~  \\\\ //  ~" << std::endl;
    file << "_- -   | | _- _" << std::endl;
    file << "  _ -  | |   -_" << std::endl;
    file << "      // \\\\" << std::endl;

    file.close();
}

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShruberryCreationForm", 137, 145), target("")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShruberryCreationForm", 137, 145), target(target)
{

}


ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy)
{
    *this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & target)
{
    this->target  = target.target;
	return (*this);
}