#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "WrongCat constructor default" << std::endl;
	type = "WrongCat";
	return ;
}

WrongCat::WrongCat(WrongCat const & to_copy) : WrongAnimal(),  type("WrongCat")
{
	std::cout << "WrongCat constructor copy called" << std::endl;
	*this = to_copy;
	return ;
}

WrongCat & WrongCat::operator=(WrongCat const & wrongcat)
{
	std::cout << "WrongCat constructor overload operator '=' called" << std::endl;
	(void)wrongcat;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

void WrongCat::makeSound(void) const
{
	std::cout << "*cute Wrongcat sound*" << std::endl;
	return ;
}

std::string WrongCat::getType(void) const
{
	return (type);
}
