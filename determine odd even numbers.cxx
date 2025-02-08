#include <iostream>
int main()
{
	int number;
	std::cout << "Enter a number \n" ;
	std::cin >> number;
	if (number % 2 == 0)std::cout << "Is an even number \n";
	else std::cout << "Is an odd number\n";
		return 0;
	}