#include<iostream>
using namespace std;
class part
{
private:
    int modelNum;
    int PrivateNum;
    float cost;
public:
    void setdata(int x,int y,int z)
    {
        modelNum = x;
        PrivateNum = y;
        cost = z;
    }
    void showdata()
    {
        cout << "this is the model num: "<<modelNum<<endl;
        cout <<"Private number is: "<<PrivateNum<<endl;
        cout << "Cost is: "<<cost;
    }
};
int main()
{
    part all;
    all.setdata(20,90,20.35f);
    all.showdata();
}
