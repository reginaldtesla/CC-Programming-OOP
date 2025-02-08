#include <iostream>
using namespace std;
const int LEN = 80;
class employee
{

private:
    char name[LEN];
    double idNumber;
public:
    void getdata()
    {
        cout<<"Enter ur Name: ";
        cin>>name;
        cout<<"\nEnter ur id number: ";
        cin>>idNumber;
    }
    void putdata()
    {
        cout<<"\n name: "<<name;
        cout<<"\n id number: "<<idNumber;
    }
};
class manager : public employee
{
private:
    char title[LEN];
    double dues;
public:
    void getdata()
    {
        cout<<"Enter ur Name: ";
        cin>>title;
        cout<<"\nEnter ur id number: ";
        cin>>dues;
    }
    void putdata()
    {
        cout<<"\n Title: "<<title;
        cout<<"\n Golf club dues: "<<dues;
    }
};
class scientiet : public employee
{
private:
    char publication[LEN];
public:
    void getdata()
    {
        cout<<"Enter ur Publication: ";
        cin>>publication;
        ;
    }
    void putdata()
    {
        cout<<"\n Publication: "<<publication;
    }
};
class laborer : employee{};
int main{
manager m1,m2;
scientiet s1;
laborer l1;

}
