#include "FragTrap.hpp"

int main(void)
{
	FragTrap null;
	FragTrap erzow("Erzow");
	FragTrap paul("Paul");

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
	erzow.highFivesGuys();
}