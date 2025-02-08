#include <iostream>
using namespace std;
int main()
{
	cout << "Enter a number\n";
	int n;
	cin >> n;
	int i = 0;
	while (i != n)
	{
		cout << "*";
		i++;
	}
}