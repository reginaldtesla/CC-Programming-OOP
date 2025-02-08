#include <iostream>
using namespace std;
int main()
{
	unsigned long long num; 
	cout << "Enter the number u want to count\n";
	cin >> num;
	int count = 0;
	while (num > 0)
	{
		num = num / 10;
		count++;
	}
	cout << count;
}