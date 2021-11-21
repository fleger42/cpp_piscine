#include "span.hpp"

span::span(void) : N(0)
{
	return ;
}

span::span(unsigned int N) : N(N)
{

	return ;
}

void span::addNumber(int nbr)
{
	if(tab.size() >= N)
		throw FullException(*this);
	tab.push_back(nbr);
}

span::~span(void)
{
	tab.clear();
	return ;
}

void span::PrintSpan(void)
{
	std::vector<int>::iterator it = tab.begin();
	std::vector<int>::iterator ite = tab.end();
	while(it != ite)
	{
		std::cout << *it << std::endl;
		it++;
	}
}

int span::shortestSpan(void)
{
	if(tab.size() <= 1)
		throw NotEnoughNbr();
	std::vector<int>::iterator it = tab.begin();
	std::vector<int>::iterator ite = tab.end();
	std::sort(it, ite, std::greater<int>());
	int diff;
	int shortest = 2147483647;

	while(it != ite)
	{
		if(it + 1 != ite)
			diff = *it - *(it + 1);
		if(diff < shortest)
			shortest = diff;
		it++;
	}
	return (shortest);
}

int span::longestSpan(void)
{
	if(tab.size() <= 1)
		throw NotEnoughNbr();
	std::vector<int>::iterator it = tab.begin();
	std::vector<int>::iterator ite = tab.end();
	std::sort(it, ite, std::greater<int>());
	return (*it - tab.back());
}

span::span(span const & copy)
{
	this->tab = copy.tab;
	this->N = copy.N;
	return ;
}
span & span::operator=(span const & copy)
{
	this->tab = copy.tab;
	this->N = copy.N;
	return *this;
}