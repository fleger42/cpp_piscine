#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <list>
#include <map>
#include <exception>

class	NumberNotFound : public std::exception
{
	virtual const char *what() const throw()
	{
		return ("Number could not be found");
	}
};

template <typename T>
void	easyfind(T & a, int to_match)
{
	typename T::iterator ret;
  	if((ret = std::find(a.begin(), a.end(), to_match)) != a.end())
		std::cout << *ret << std::endl;	
	else
		throw(NumberNotFound());
}
#endif