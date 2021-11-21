#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat constructor default" << std::endl;
	type = "Cat";
	brain = new Brain();
	return ;
}

Cat::Cat(Cat const & to_copy) : Animal(), type("Cat")
{
	std::cout << "Cat constructor copy called" << std::endl;
	brain = new Brain(*to_copy.brain);
	return ;
}

Cat & Cat::operator=(Cat const & Cat)
{
	std::cout << "Cat constructor overload operator '=' called" << std::endl;
	brain = new Brain(*Cat.brain);
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
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
