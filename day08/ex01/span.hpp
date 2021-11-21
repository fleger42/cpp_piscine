#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <list>
#include <map>
#include <exception>
#include <string>
#include <sstream>

class	span
{
	public:
		template <typename T>
		void addNumber(T it, T ite)
		{
			for( ; it != ite; it++)
			{
				if(tab.size() >= N)
					throw FullException(*this);
				tab.push_back(*it);
			}
		}
		class	FullException : public std::exception
		{
			public:
				FullException(span & mother)
				{
					std::stringstream s;
					s << "Error ! Impossible to add more number because this object has "
					<< mother.tab.size() << " elements and can only contain " << mother.N << ".";
					msg = s.str();
				}
				virtual const char *what() const throw()
				{
					return (msg.c_str());
				}
				~FullException() throw()
				{
					
				}
			private:
				std::string msg;
		};
		class	NotEnoughNbr : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Error ! Impossible to sort because this object doesnt have enough elements.");
				}
				~NotEnoughNbr() throw()
				{

				}
			private:
				std::string msg;
		};
		span(void);
		span(unsigned int N);
		~span(void);
		span(span const & copy);
		void addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite);
		span & operator=(span const & copy);
		void addNumber(int nbr);
		void PrintSpan(void);
		int shortestSpan(void);
		int longestSpan(void);
	private:
		std::vector<int> tab;
		unsigned int N;
};
#endif