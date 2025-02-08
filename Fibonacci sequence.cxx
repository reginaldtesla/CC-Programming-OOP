#include <iostream>
using namespace std;
int main()
{
	//fibonacci sequence
	int n, a, b, c;
	cout << "Enter a number:::\n";
	cin >> n;
		a = 1;
		b = 1;
		c = 0;
		cout << "1 1 ";
	for (int i = 2; i < n; i++)
	{c= a+b;
		cout << c << " ";
		a = b;
		b = c;
		
	}
}