#include <iostream>
#include <vector>
using namespace std;
int main()
{
	//convert deci to binary
	int n;
	cout << "Enter number\n";
	cin>> n;
	vector<int> v; //store values in a vector
	while (n > 0)
	{
		int t = n % 2;
		v.push_back(t); //push the value of t to vector v
		n = n / 2;
	}
	//acess the last number in the vector array and equate it to i
	for (int i = v.size() - 1; i >= 0; i--)
	{
		cout << v[i];
	}
}