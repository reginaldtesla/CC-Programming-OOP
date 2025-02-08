#include <iostream>
using namespace std;
//factorial of a number.
//the fxn fact calc the factorial of the number and sends to the main function to be displayed.
inline unsigned float fact(int y){
unsigned float start=1;
for (int i=2;i<=y;i++)
    start = start*i;
    return start;
}
int main(){
int x;
cout<<"Enter a number: ";
cin>> x;
cout<< "The factorial of " << X << " is " <<fact(x);
return 0;}
