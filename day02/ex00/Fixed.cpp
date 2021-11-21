#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : fixed_value(0)
{
	std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Fixed::~Fixed(void) 
{
	std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed & Fixed::operator=(Fixed const &to_equal)
{
    std::cout << "Assignation operator called" << std::endl;
	this->fixed_value = to_equal.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const 
{
    std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_value);
}

void Fixed::setRawBits(int const raw) 
{
    std::cout << "setRawBits member function called" << std::endl;
	return ;
}
