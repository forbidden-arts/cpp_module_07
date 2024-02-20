#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, size_t length, void (*f)(T const &))
{
	size_t i = 0;
	while (i < length)
	{
		f(array[i]);
		i++;
	}
}

template <typename T>
void printResult(T const &n)
{
	std::cout << n << " ";
}

#endif
