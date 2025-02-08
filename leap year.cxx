/*leap year is the ear where there are 29 days in the monht of febuary. some conditions are necessary for a leap year ie 1 it should be divisible by 4 and not by 100; 2. i should be divisible by 400. eg of leapyears are 1952, 1956 1960 2000 2400 2800. not a leap year is 2100 2300 */
#include <iostream>
using namespace std;
int main()
{
	int year;
	cout << "Enter a year\n";
	cin >> year;
	if ((year % 4 == 0) and (year % 100 != 0))
		cout << "is a leap year";
	else if (year % 400 == 0)
		cout << "is a leap year";
	else
		cout << "Not a leap year";
	return 0;
}