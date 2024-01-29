#include "iter.hpp"

int main(void)
{
	int iArray[] = {1, 2, 3, 4, 5};
	float fArray[] = {1.0f, 1.1f, -3.0f, 4.5f, 90.9f};
	char strArray[] = {'A', 'b', 'c', 'd', 'E'};

	iter<int>(iArray, (size_t)5, printResult);
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << iArray[i] << std::endl;
	iter<float>(fArray, (size_t)5, printResult);
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << fArray[i] << std::endl;
	iter<char>(strArray, (size_t)5, printResult);
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << strArray[i] << std::endl;
	return (0);
}