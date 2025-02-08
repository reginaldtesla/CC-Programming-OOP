#include <iostream>
using namespace std;
int main(){
	int op, x, y;
	cout << " Enter an operator and twonumbers to get the resuts of that num, ie 1 for addition and 2 for sutraction 3 for multiplication and 4 for division\n";
	cin >> op >> x >>y;
	if(op == 1)cout << x+y;
	else if (op == 2) cout << x-y;
	else if (op == 3) cout << x*y;
	else if (op == 4) cout << x/y;
	else cout << "invalid number";
	return 0;
}