/*5. Comment your code appropriatel*/
#include<iostream>
using namespace std;
int main(){
/*1. Type out and run a single hello world code.*/
cout << "Hello World";
/*2.In your editor, properly declare the following (feel free to name the variables with any
identifier you want):
a. 17785 b. Welcome to this class! c. -56.1427 d. 5262778y e. (Three integers on one line, all equal to 5) f. True g. (A string array with a 10-character limit)*/
unsigned int x=17785;
string setence = "Welcome to this class";
signed int neg = -56.1427;

int c,v,b;
c==v==b==5;
bool choise = true;
string arr[10]={"this is the best day of my life."};
/*3. Write a short program that asks the user for their age and responds with the year the
user was born in (The input must be received on the next line).*/
cout<<"\n What is your age: ";
int age;
cin>>age;
int year = 2024-age;
cout<<"\n the year u were born in "<<year;
/*4. Implement the following:
T-S.M.A ADJAIDOO 2
a. Initialize an integer array called “Marks” without a limit and with the following
values: 67, 71, 54, 43, 82, 90.
b. Change the third value to 75.
c. Pass the fifth value to a variable called “AppliedElectricity”.*/
int marks[]{67, 71, 54, 43, 82, 90};
marks[2]=75;
int AppliedElectricity = marks[4];
}
