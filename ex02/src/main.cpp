#include <iostream>
#include <Array.hpp>

int main(void)
{
	Array<int> a(5);
	for (unsigned int i = 0; i < a.size(); i++)
	{
		std::cout << a[i] << std::endl;
	}
	Array<char> b(5);
	for (unsigned int i = 0; i < b.size(); i++)
	{
		b[i] = 'a' + i;
		std::cout << b[i] << std::endl;
	}

	try
	{
		Array<float> c(2);
		int index = 10;
		c[index] = 5.3f;
		std::cout << c[index] << std::endl;
	}
	catch (Array<float>::IndexOutOfBounds &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "COPY CONSTRUCTOR TEST" << std::endl;
	try
	{
		int index = 0;
		Array<float> c(2);
		c[index] = 5.3f;
		Array<float> d(c);
		std::cout << "c: " << c[index] << std::endl;
		std::cout << "d: " << d[index] << std::endl;
		c[index] = 7.3f;
		std::cout << "c: " << c[index] << std::endl;
		std::cout << "d: " << d[index] << std::endl;
	}
	catch (Array<float>::IndexOutOfBounds &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "PRINT CONTENT AT INDEX" << std::endl;
	{
		try
		{
			int index = 0;
			const Array<int> arr(2);
			std::cout << "val: " << arr[index] << std::endl;
		}
		catch (Array<float>::IndexOutOfBounds &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl << "COPY ASSIGNMENT OPERATOR TEST" << std::endl;
	try
	{
		int index = 0;
		Array<float> c(2);
		c[index] = 5.3f;
		Array<float> d = c;
		std::cout << "c: " << c[index] << std::endl;
		std::cout << "d: " << d[index] << std::endl;
		c[index] = 7.3f;
		std::cout << "c: " << c[index] << std::endl;
		std::cout << "d: " << d[index] << std::endl;
	}
	catch (Array<float>::IndexOutOfBounds &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "AFTER BEING INITIALIZED FIRST" << std::endl;
	try
	{
		int index = 0;
		Array<float> c(2);
		c[index] = 5.3f;
		Array<float> d(5);
		d[index] = 9.4f;
		std::cout << "c: " << c[index] << std::endl;
		std::cout << "d: " << d[index] << std::endl;
		std::cout << "elements in c: " << c.size() << std::endl;
		std::cout << "elements in d: " << d.size() << std::endl;
		d = c;
		std::cout << "c: " << c[index] << std::endl;
		std::cout << "d: " << d[index] << std::endl;
		c[index] = 8.3f;
		std::cout << "c: " << c[index] << std::endl;
		std::cout << "d: " << d[index] << std::endl;
		std::cout << "elements in c: " << c.size() << std::endl;
		std::cout << "elements in d: " << d.size() << std::endl;
	}
	catch (Array<float>::IndexOutOfBounds &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}