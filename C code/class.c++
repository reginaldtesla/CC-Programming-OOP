#include <iostream>
using namespace std;
class Quadrilateral
{
    int x;
    int y;

public:
    Quadrilateral() : x(0), y(0) {} // initializing the values of x and y
    void set_values(int a, int b)
    {
        x = a;
        y = b;
    }
    int area()
    { // functions to calculate the products of x and y
        return x * y;
    }
};
int main()
{
    Quadrilateral square, rectangle;
    square.set_values(10, 10);
    rectangle.set_values(5, 10);
    cout << "Area of square is : " << square.area() << endl;
    cout << "ARea of rectangle : " << rectangle.area() << endl;
}