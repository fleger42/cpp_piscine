#ifndef MUTANT_STACK_H
#define MUTANT_STACK_H
#include <iostream>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::const_iterator const_iterator;
		typedef typename std::deque<T>::reverse_iterator reverse_iterator;
		typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;
		MutantStack() {};
		MutantStack(MutantStack<T> const & copy)
		{
			*this = copy;
		}
		~MutantStack() {};
		iterator begin()
		{
			return(iterator(this->c.begin()));
		}
		const_iterator begin() const
		{
			return(iterator(this->c.begin()));
		}
		const_iterator end() const
		{
			return(iterator(this->c.end()));
		}
		iterator end()
		{
			return(iterator(this->c.end()));
		}
		reverse_iterator rbegin()
		{
			return(reverse_iterator(this->c.rbegin()));
		}
		const_reverse_iterator rbegin() const
		{
			return(reverse_iterator(this->c.rbegin()));
		}
		const_reverse_iterator rend() const
		{
			return(reverse_iterator(this->c.rend()));
		}
		reverse_iterator rend()
		{
			return(reverse_iterator(this->c.rend()));
		}
};
#endif