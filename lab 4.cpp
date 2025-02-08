/*1. Create a class called Quadrilateral. It should have private integer variables x and y.
a. This class should have two functions: set_values will pass two integer values to
the variables x and y while area will calculate and return the product of the two
variables.
2. Create two objects from this class, square and rectangle.
3. Using set_values, set the x and y variables for square to 10 and 10.
4. Using set_values, set the x and y variables for rectangle to 5 and 10.
5. Using area, display the area values for square and rectangle on the console*/
#include <iostream>
using namespace std;
class Quadrilateral
{
private:
    int x,y;
public:
    void set_value(int a,int b)
    {
        x=a;
        y=b;
    }
    void area()
    {
        int area=x*y;
        cout<< area;
    }
};
int main()
{
    Quadrilateral square,rectangle;
    square.set_value(10,10);
    rectangle.set_value(5,10);
    square.area();
    cout << endl;
    rectangle.area();
    return 0;
}
