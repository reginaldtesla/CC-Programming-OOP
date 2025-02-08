#include<iostream>
using namespace std;
//calling functions
void test(char,int);
void test(char ch,int n)
{
    for(int i = 0; i<20; i++)
    {
        cout << ch;
        cout << n;
    }
}
void pass(char,int);
void pass(char now,int x)
{
    for (int i = 0; i < x; i++)
    {
        cout <<now;
    }
}
int main()
{
    char been;
    int x;
    test('*',20);
    cout <<endl<< "\nThis is Tesla from the future. Hope u like my lame code.\n"<<endl;
    test('&',20);
    /*Passing Arguments to Functions*/
    cout << "\nEnter the character u want? ";
    cin >>been;
    cout<<"\nEnter number of times u want the character to repeat.   ";
    cin >>x;
    pass(been,x);
    cout <<"\nThis is getting difficult and confusing\n";
    pass(been,x);
    return 0;
}
