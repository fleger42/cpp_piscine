#include "Fixed.hpp"
#include "cmath"

Fixed::Fixed(void) : fixed_value(0)
{
	//std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const & copy)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Fixed::Fixed(const float n) : fixed_value(n)
{
	this->fixed_value = roundf(((float)n * (1 << this->fractionnal_nbr)));
	//std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int n)
{
	this->fixed_value = n << this->fractionnal_nbr;
	//std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void) 
{
	//std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed & Fixed::operator=(Fixed const &to_equal)
{
    //std::cout << "Assignation operator called" << std::endl;
	this->fixed_value = to_equal.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const 
{
	return (this->fixed_value);
}

void Fixed::setRawBits(int const raw) 
{
    //std::cout << "setRawBits member function called" << std::endl;
	this->fixed_value = raw;
	return ;
}

float Fixed::toFloat(void) const
{
    return ((float)(this->fixed_value) / (1 << this->fractionnal_nbr));
}

int Fixed::toInt(void) const
{
    return ((int)(this->fixed_value >> this->fractionnal_nbr));
}
std::ostream & operator<<(std::ostream &o, Fixed const &nbr)
{
	o << nbr.toFloat();
	return o;
}
