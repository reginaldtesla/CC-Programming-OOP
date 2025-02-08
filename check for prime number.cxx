#include <iostream>
using namespace std;
int main()
{
	//check for prime number
	int n;
	cout << "Enter a number::::\n";
	cin >> n;
	if (n == 0 || n == 1)
	{
		cout << "Neither prime nor composite";
	}
	for (int i = 2; i < n; i++)
	{
		if (n % i != 0)
		{
			cout << "Is prime";
			break;
		}
		else
			cout << "is not prime";
		break;
	}
}