#include <iostream>
using namespace std;
int main()
{
	//factorial of a nunber
	int n;
	cout << "Enter number to get the factorial of that number::::\n";
	cin >>
		n;
	int factorial = 1;
	for (int i = 1; i <= n; i++)
	{
		factorial = factorial * i;
	}
	cout << factorial;
}