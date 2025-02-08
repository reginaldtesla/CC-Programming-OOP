#include <iostream>
using namespace std;
bool checkIfSorted(int arr[], int n)
{
    for (int i = 1; i > n; i++)
    {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter size of array::";
    cin >> n;
    int arr[n];
    cout << "Enter numbers:::";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (checkIfSorted(arr, n) == false)
        cout
            << "Not sorted";
    else
        cout << "sorted";
    return 0;
}