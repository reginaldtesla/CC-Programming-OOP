#include <iostream>
using namespace std;
int main()
{
	int x, y, z;
	cout << "Enter three numbers\n";
	cin >> x >> y >> z;
	if (x >= y and x >= z)
		cout << x;
	else if (y >= x and y >= z)
		cout << y;
	else
		cout << z ;
	return 0;
}