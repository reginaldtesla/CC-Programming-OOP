#include <iostream>
using namespace std;
int main()
{
	//LCM of 2 numbers
	int a, b;
	cout << "Enter two numbers:::\n";
	cin >> a >> b;
	int x = max(a, b);
	int end = a*b;
	int LCM = x;
	for (int i = x; i <= end; i++)
	{
		if (i%a ==0 && i%b== 0)
		{
			LCM = i;
			break;
		}
	}
	cout << LCM;
}