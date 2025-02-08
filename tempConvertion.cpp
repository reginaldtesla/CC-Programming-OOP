
/*Write a temperature-conversion program that gives the user the option of converting
Fahrenheit to Celsius or Celsius to Fahrenheit. Then carry out the conversion. */
#include <iostream>
using namespace std;
int main()
{
    cout<< "Choose either one or two\n1.Fahrenheit to Celsius\n2.Celsius to Fahrenheit\n";
    int choise;
    cin>> choise;

    if (choise == 1)
    {
        int x;
        cout<<"Enter temp in F : ";
        cin >> x;
        float c = (((x-32)*5)/9);
        cout <<"Celsius temp is "<< c<< endl;
    }
    else if (choise == 2)
    {
        int y;
        cout<<"Enter temp in C : ";
        cin >> y;
        float f = ((9*y/5)-32);
        cout <<"Fahrenheit temp is "<< f<< endl;
    }
    else cout<<"Choose  an option"<< endl;

return 0;
}
