#include <iostream>
using namespace std;
int main()
{
	//GCD of two numbers
	int a, b;
	cout << "Enter two numbers with a space btn:::\n";
	cin >> a >> b;
	int x = min(a, b);
	int GCD = 1;
	for (int i = 1; i <= x; i++)
	{
		if (a % i == 0 &&b %i== 0)
		{
			GCD = i;
		}
	}
	cout << GCD;
}