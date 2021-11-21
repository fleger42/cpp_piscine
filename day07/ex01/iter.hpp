#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <iomanip>
template <typename T, typename U>
void iter(T *array, U length, void (*function)(T &))
{
	U count = 0;
	while(count < length)
	{
		(*function)(array[count]);
		count++;
	}
}

template <typename T>
void incre(T & nbr)
{
	nbr++;
}
#endif