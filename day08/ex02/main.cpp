#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout << "with mutantstack" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	
	std::cout << "with list" << std::endl;

	std::list<int> _list;
	_list.push_back(5);
	_list.push_back(17);
	std::cout << _list.back() << std::endl;
	_list.pop_back();
	std::cout << _list.size() << std::endl;
	_list.push_back(3);
	_list.push_back(5);
	_list.push_back(737);
	//[...]
	_list.push_back(0);
	std::list<int>::iterator lit = _list.begin();
	std::list<int>::iterator lite = _list.end();
	++lit;
	--lit;
	while (lit != lite)
	{
	std::cout << *lit << std::endl;
	++lit;
	}
	std::list<int> ls(_list);
	return 0;
}