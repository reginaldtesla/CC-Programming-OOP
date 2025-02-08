/*Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 pesewas toll. Mostly
they do, but sometimes a car goes by without paying. The tollbooth keeps track of the number of cars that
have gone by, and of the total amount of money collected.
Model this tollbooth with a class called tollBooth. The two data items are a type unsigned int to hold the total
number of cars, and a type double to hold the total amount of money collected. A constructor initializes both
of these to 0*/
#include <iostream>
using namespace std;
class Tollbooth{
private :
    unsigned int totalCars;
    double totalAmount;
public :
    Tollbooth():totalCars(0),totalAmount(0){}
    Tollbooth(int x,int y):totalCars(x),totalAmount(y){};
/*A member function called payingCar() increments the car total and adds 0.50 to the cash total.*/
    const void payingCar(){totalCars++;totalAmount+=0.5;}
/*Another function, called nopayCar(), increments the car total but adds nothing to the cash total.*/
    const void nopaycar(){totalCars++;}
/*Finally, a member function called display() displays the two totals. Make appropriate member functions const.*/
    void display(){
    cout<<"Total cars passed: "<<totalCars<<endl;
    cout<<"Total amount of money collected: "<<totalAmount<<endl;}
};
/*Include a program to test this class. This program should allow the user to push one key to count a paying
car, and another to count a nonpaying car. Pushing the Esc key should cause the program to print out the
total cars and total cash and then exit.*/
int main(){
    Tollbooth start;
    char choise;
do{
    cout <<"Press number 1 to count a paying car\nNumber 2 to count a nonpaying car\nNumber 3 to display the total number of cars passed and total amount of money collected."<<endl;
    int toll;
    cin>>toll;
    switch(toll){
    case 1:
        start.payingCar();
        break;
    case 2:
        start.nopaycar();
        break;
    case 3:
        start.display();
        break;
    default :
        cout<<"Enter a valid argument.";
        break;
        }
    cout<<"Do you want to perform another one? y/n  ";
    cin>> choise;
}
while(choise !='n');
}
