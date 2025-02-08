/*Create the equivalent of a four-function calculator.
§ The program should ask the user to enter a number, an operator, and another number.
§ It should then carry out the specified arithmetical operation: adding, subtracting, multiplying, or
dividing the two numbers.
§ Use a switch statement to select the operation.
§ Finally, display the result.
§ When it finishes the calculation, the program should ask whether the user wants to do another
calculation. The response can be ‘y’ or ‘n’*/
#include<iostream>
using namespace std;
int main()
{

    char ans;
    do
    {
        int x,y;
        cout <<"choose which operation to use on the numbers inputed\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division";
        int choise ;
        cin>> choise;
        cout << "Enter two numbers : ";
        cin>> x>>y;
        switch(choise)
        {
        case 1:
            cout << x+y <<endl;
            break;
        case 2:
            cout << x-y<<endl;
            break;
        case 3:
            cout << x*y<<endl;
            break;
        case 4:
            cout << x/y<<endl;
            break;
        }
        cout << "Do you want to perform more calculations? Y/N \n";
        cin>>ans;
    }
    while(ans != 'N');
    return 0;
}
