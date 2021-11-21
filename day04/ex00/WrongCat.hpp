#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat const & to_copy);
		WrongCat & operator=(WrongCat const & trap);
		~WrongCat(void);
		void makeSound(void) const;
		std::string getType(void) const;
	protected:
		std::string type;
};
#endif