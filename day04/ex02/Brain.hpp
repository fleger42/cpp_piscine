#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const & to_copy);
		Brain & operator=(Brain const & trap);
		~Brain(void);
	private:
		std::string idea[100];
};
#endif