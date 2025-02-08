#include <iostream>
using namespace std;
/*Create an enum class Operation that has values Add, Subtract, Multiply,
and Divide*/
enum class Operations {
Add,
Subtract,
Multiply,
Divide
};
/*Create a struct Calculator. It should have a single constructor that takes
an Operation*/
struct Calculator){
Calculator(Operations::Add};
/*Create a method on Calculator called int calculate(int a, int b).
Upon invocation, this method should perform addition, subtraction, multiplication, or division based on its constructor argument and return the result*/
int Calculate(int a, int b){
    switch(operations){
    case operations::Add:
        return a+b;
    case operations::subtract:
        return a-b;
    case operations::Multiply:
        return a*b;
    case operations::Divide:
        return a/b;
    default:
        cout<<"Unknown Operator\n";
        }
};
