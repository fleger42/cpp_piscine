#include <iostream>
#include "Array.hpp"

int main()
{
	std::cout << "Basic test with int" << std::endl;
	Array<int> test(5);
	for(int i = 0; i < 5; i++)
	{
		test[i] = i;
	}
	Array<int> first(test);
	Array<int> second;
	second = first;
	for(int i = 0; i < 5; i++)
	{
		std::cout << "test = " << test[i] << std::endl;
		std::cout << "first = " << first[i] << std::endl;
		std::cout << "second = " << second[i] << std::endl;
	}
	std::cout << "test_size  = " << test.size() << std::endl;
	std::cout << "first_size  = " << first.size() << std::endl;
	std::cout << "second_size  = " << second.size() << std::endl;
	try
	{
		test[4] = 10;
		std::cout << "the next operation will throw an exception" << std::endl;
		test[5] = 10;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "Basic test with string" << std::endl;

	Array<std::string> tab(3);

	tab[0] = "manger";
	tab[1] = "boire";
	tab[2] = "dormir";

	std::cout << tab[0] << std::endl;
	std::cout << tab[1] << std::endl;
	std::cout << tab[2] << std::endl;
}
