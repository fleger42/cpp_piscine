#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat constructor default" << std::endl;
	type = "Cat";
	return ;
}

Cat::Cat(Cat const & to_copy) : Animal(), type("Cat")
{
	std::cout << "Cat constructor copy called" << std::endl;
	*this = to_copy;
	return ;
}

Cat & Cat::operator=(Cat const & cat)
{
	std::cout << "Cat constructor overload operator '=' called" << std::endl;
	(void)cat;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

void Cat::makeSound(void) const
{
	std::cout << "*cute cat sound*" << std::endl;
	return ;
}

std::string Cat::getType(void) const
{
	return (type);
}
