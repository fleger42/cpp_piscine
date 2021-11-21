#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const & to_copy);
		Dog & operator=(Dog const & trap);
		virtual ~Dog(void);
		virtual void makeSound(void) const; 
		virtual std::string getType(void) const; 
	protected:
		std::string type;
	private:
		Brain *brain;
};
#endif