//first digit of number
#include <iostream>
using namespace std;
int findFirstDigit(int n)
{
	while (n > 10)
	{
		n= n / 10;
	}
	return n;
}
int main()
{
	int n;
	cin >> n;
	cout << findFirstDigit(n);
	return 0;
}
