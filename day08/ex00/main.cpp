#include "easyfind.hpp"

int main()
{
	std::vector<int> v1(10, 40);
	easyfind(v1, 40);

	std::vector<int> v2(10, 30);
	try
	{
		easyfind(v2, 40);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::vector<int> v3;
	try
	{
		easyfind(v3, 40);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::vector<int> v4(0,0);
	try
	{
		easyfind(v4, 40);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::list<int> v5;

	v5.push_back(100);
	v5.push_back(10);
	
	try
	{
		easyfind(v5, 10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}