#ifndef FRAG_TRAP
#define FRAG_TRAP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(FragTrap const & to_copy);
		FragTrap & operator=(FragTrap const & trap);
		FragTrap(std::string name);
		~FragTrap(void);
		void printtrap(void);
		void attack(std::string const & target);
		void highFivesGuys(void);
};
#endif