#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP
#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & to_copy);
		WrongAnimal & operator=(WrongAnimal const & trap);
		~WrongAnimal(void);
		void makeSound(void) const;
		std::string getType(void) const;
	protected:
		std::string type;
};
#endif