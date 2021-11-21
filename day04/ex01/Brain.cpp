#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor default" << std::endl;
	return ;
}

Brain::Brain(Brain const & to_copy)
{
	std::cout << "Brain constructor copy called" << std::endl;
	*this = to_copy;
	return ;
}

Brain & Brain::operator=(Brain const & brain)
{
	(void)brain;
	std::cout << "Brain constructor overload operator '=' called" << std::endl;
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}
