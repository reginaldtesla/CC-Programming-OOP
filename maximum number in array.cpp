#include <iostream>
using namespace std;
//max fxn takes the arr input and size of array and
//create a start point called ans and runs a for loop
//to get the biggest number.
int maximum(int arr[], int x){
int ans = arr[0];
for(int i = 0; i< x; i++){
if (arr[i]> ans)ans = arr[i];}
    return ans;
}
int main(){
int x;
cout<<"Enter length of array:  ";
cin>>x;
cout << "Enter numbers into array\n";
//creates an array and takes in values with the for loop
int arr[x];
for (int i=0;i<x;i++){
    cin>>arr[i];
}
//returns the max value by calling the fxn.
return maximum(arr,x);
};
