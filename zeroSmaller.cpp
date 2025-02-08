/*Write a function called zeroSmaller() that is passed two int arguments by
reference and then sets the smaller of the two numbers to 0. Write a main()
program to exercise this function*/
#include <iostream>
using namespace std;
void zeroSmaller(int &x,int &y)
{
    if(x<y)
    {
        x=0;
    }
    else y=0;
    cout<<x<<endl<<y;
}
int main()
{
    int m,n;
    cout <<"Enter two numbers: ";
    cin>> m >> n;
    zeroSmaller(m,n);
}
