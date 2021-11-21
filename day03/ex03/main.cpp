#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap erzow("Erzow");

	erzow.printtrap();

	erzow.takeDamage(100);
	erzow.beRepaired(1000000);
	erzow.attack("Dragon");
	erzow.highFivesGuys();
	erzow.guardGate();
	erzow.whoAmI();
}