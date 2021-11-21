#include "Zombie.hpp"

int main()
{
    randomChump("Charli");
	Zombie value("Hugo");;
    value.annouce();
	Zombie *second = newZombie("Paul");
	second->annouce();
    delete second;
	second = newZombie("Paul2");
	second->annouce();
    delete second;

}