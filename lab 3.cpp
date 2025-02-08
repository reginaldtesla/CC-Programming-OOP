#include<iostream>
using namespace std;
/*Write a global function to find the sum of the first n natural numbers. */
void sumOfNum(int x){
    int start = 0;
for (int i=1;i<=x;i++){
    start += i;
}cout<<start<<endl;}
/*Write a function that receives the input of a person’s height in centimeters and returns
the person’s height in feet.*/
void hietofe(int y){
double feet = y*0.0328;
cout<<"feet is "<<feet<<endl;
}
/*Write a function to generate the Fibonacci sequence up to a given number*/
void fib(int x){
    int a,b,c;
    a = 1;
    b = 1;
    c = 0;
    cout << "0 1 1 ";
    for (int i = 2; i < x; i++)
    {
        c= a+b;
        cout << c << " ";
        a = b;
        b = c;

    }
}
int main(){
/*Then prepare a program to accept an integer input that will call the function you wrote.*/
cout <<"sum of the first n natural numbers: ";
int a;
cin>>a;
sumOfNum(a);
cout<<"Enter the height in cm: ";
int cen;
cin>>cen;
hietofe(cen);
cout<<"Fibonacci sequence to what number: ";
int d;
cin>>d;
fib(d);
}
