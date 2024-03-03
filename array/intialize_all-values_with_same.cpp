#include<iostream>
using namespace std;

int main(){
int n = 10;  // Size of the array
int value = 5;  // Value to fill the array with
int arr[n];
fill_n(arr, n, value);
cout<<arr[0];
cout<<arr[1];
cout<<arr[2];
cout<<arr[3];
cout<<arr[4];



}