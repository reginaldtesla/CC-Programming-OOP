#include <iostream>
using namespace std;
int main()
{
	//binary number to decimal for +ive numbers
	int n;
	int val = 0;
	int base = 1;
	cout << "Enter number to convert to base 10 \n";
	cin >> n;
	while (n > 0)
	{
		int last_dig = n % 10;
		val = val + (last_dig * base);
		n = n / 10;
		base = base * 2;
	}
	cout << val;
}