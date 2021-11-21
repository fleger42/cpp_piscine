#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	int array_size = 2;
	Animal *array[array_size];
	int i = 0;
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "First while" << std::endl << std::endl;
	while(i < array_size/2)
	{
		array[i] = new Dog();
		i++;
	}	
	std::cout << std::endl << std::endl << std::endl;
	
	std::cout << "Second while" << std::endl << std::endl;
	while(i < array_size)
	{
		array[i] = new Cat();
		i++;
	}
	std::cout << std::endl << std::endl << std::endl;

	std::cout << "Delete while" << std::endl << std::endl;
	while(i--)
		delete array[i];
	std::cout << std::endl << std::endl << std::endl;

	std::cout << "Test main" << std::endl << std::endl;
	const Animal* j = new Dog();
	const Animal* k = new Cat();
	delete k;
	delete j;//should not create a leak
	std::cout << std::endl << std::endl << std::endl;

	std::cout << "Deep copy test" << std::endl << std::endl;
	Dog original;
	{
		Dog copy = original;
		Dog copy2 = original;
	}
}