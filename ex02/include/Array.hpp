#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
	T *array;
	unsigned int _size;
public:
	Array()
	{
		this->array = new T();
		this->_size = 0;
	}
	Array(unsigned int n)
	{
		this->_size = n;
		this->array = new T[n];
	}
	Array(const Array &other)
	{
		this->array = new T(other._size);
		for (unsigned int i = 0; i < other._size; i++)
			this->array[i] = other.array[i];
		this->_size = other._size;
	}
	Array &operator=(const Array &other)
	{
		delete[] this->array;
		this->array = new T(other._size);
		for (unsigned int i = 0; i < other._size; i++)
			this->array[i] = other.array[i];
		this->_size = other._size;
		return (*this);
	}
	T &operator[](int index)
	{
		if (index < 0 || index >= (int)this->_size)
			throw(IndexOutOfBounds());
		return (this->array[index]);
	}

	const T &operator[](int index) const
	{
		if (index < 0 || index >= (int)this->_size)
			throw(IndexOutOfBounds());
		return (this->array[index]);
	}

	~Array()
	{
		delete[] this->array;
	}

	unsigned int size(void)
	{
		return (this->_size);
	}

	class IndexOutOfBounds : std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Index out of bounds.");
		};
	};

};

#endif