#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter umber of matrix u want to print in * form.\n";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int j = 0;
		while (j != n)
		{
			cout << "*";
			j++;
		}
		cout << endl;
	}
}