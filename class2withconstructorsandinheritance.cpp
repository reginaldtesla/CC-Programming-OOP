
#include<iostream>
using namespace std;
class Distance{
private:
    int feet;
    float inches;
public:
    Distance() : feet(0),inches(0.0){}
    Distance(int ft,int inc):feet(ft),inches(inc){};
    void getdata(){
    cout<<"feet value: ";cin>>ft<<endl;
    cout<<"inches value: ";cin>>inc<<endl;}
    void showdata(){
    cout<<"inches is "<<inches<<endl;
    cout<<"feet is "<<feet<<endl;}
};
