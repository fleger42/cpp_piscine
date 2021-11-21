
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap null;
	ScavTrap erzow("Erzow");
	ScavTrap paul("paul");

	erzow.printtrap();
	paul.printtrap();

	paul = erzow;
	paul.printtrap();

	erzow.takeDamage(100);
	erzow.beRepaired(1000000);
	paul.takeDamage(130);
	paul.beRepaired(40);
	paul.attack("Jean michel crapaud");
	erzow.attack("Dragon");
	erzow.guardGate();
}