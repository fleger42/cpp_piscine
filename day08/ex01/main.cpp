#include "span.hpp"

int main()
{
	std::cout << "Test 1 : Basic" << std::endl;
	try
	{
		span first(10);
		first.addNumber(9);
		first.addNumber(1);
		first.addNumber(4);
		first.addNumber(10);
		first.addNumber(3);
		std::cout << "First span contain : " << std::endl;
		first.PrintSpan();
		std::cout << "LongestSpan = " << first.longestSpan() << std::endl;;
		std::cout << "ShortestSpan = " << first.shortestSpan() << std::endl;;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Test 2 : Too big" << std::endl;
	span sp = span(10000);

	std::list<int> big_tab(10000, 40);
	sp.addNumber(big_tab.begin(), big_tab.end()); // This works fine !
	try
	{
		sp.addNumber(big_tab.begin(), big_tab.end()); //This doesnt !
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Test 3 : Empty" << std::endl;
	span last;
	
	try
	{
		last.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}