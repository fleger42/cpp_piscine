#include "Zombie.hpp"

int main()
{
	Zombie *horde = zombieHorde(10, "Arthur");
	
	for(int i = 0; i < 10; i++)
		horde[i].annouce();
	delete [] horde;
}
