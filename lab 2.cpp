/*1. Build a body mass index calculator.
2. The program must ask for a person’s height in centimeters and weight in kilograms, one
after the other. It should then display the BMI in kg/m2
.
3. If the BMI is less that 18.5, the program also should respond with “You are
underweight.”
4. If BMI falls in the range 18.5 and 24.9, the program should respond with “Your weight is
normal.”
5. Between 25 and 29.9, it should respond with “You are overweight.”
6. Between 30 and 39.9, the expected response should be “You are obese.”
7. For a BMI of 40 and above, the program’s response should be “You are morbidly obese.*/
#include<iostream>
using namespace std;
int main(){
float height;
float weight;
cout <<"Enter ur height in cm: ";
cin>>height;
 height = height/10000;
cout<<"\nEnter ur weight in kg: ";
cin>>weight;
int bmi = weight/height;
if (bmi<18.5)cout<<"Ur under weight";
else if ((bmi>=18.5)&&(bmi<=24.5))cout<<"Your weight is normal";
else if ((bmi>=25)&&(bmi<=29.9))cout<<"You are overweight";
else if ((bmi>=30)&&(bmi<=39.9))cout<<"You are obese";
else cout<<"You are morbidly obese";
return 0;
}
