#include<iostream>
using namespace std;

void alterswap(int arr[],int n){
    int start=0;
    while (start<n)
    {
    int alter=start+1;
    if (alter<n)
    {
        
        swap(arr[start],arr[alter]);
    }
    
        start=start+2;
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
}

int main(){
    int n=6;
    int arr[6]={1,2,3,4,5,6};
    int brr[5]={1,2,3,4,5};

    alterswap(arr,6);

    printarray(arr,6);

    cout << endl;

    alterswap(brr,5);
    printarray(brr,5);





}