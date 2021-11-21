#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const & to_copy);
		Cat & operator=(Cat const & trap);
		virtual ~Cat(void);
		virtual void makeSound(void) const;
		virtual std::string getType(void) const;
	protected:
		std::string type;
};
#endif