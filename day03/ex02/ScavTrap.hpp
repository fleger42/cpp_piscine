#ifndef SCAV_TRAP
#define SCAV_TRAP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(ScavTrap const & to_copy);
		ScavTrap & operator=(ScavTrap const & trap);
		ScavTrap(std::string name);
		~ScavTrap(void);
		void printtrap(void);
		void attack(std::string const & target);
		void guardGate();
};
#endif