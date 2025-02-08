#include <iostream>
using namespace std;
int stepfunc(int x)
{
    int results = 0;
    if (x < 0)
    {
        results = -1;
    }
    else if (x > 0)
    {
        results = 1;
    }
    else
        results;
    cout << results;
}
int main()
{
    int value1 = stepfunc(10);
    cout << value1 << endl;
}