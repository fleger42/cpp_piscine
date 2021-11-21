#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal(Animal const & to_copy);
		Animal & operator=(Animal const & trap);
		virtual ~Animal(void);
		virtual void makeSound(void) const;
		virtual std::string getType(void) const;
	protected:
		std::string type;
};
#endif