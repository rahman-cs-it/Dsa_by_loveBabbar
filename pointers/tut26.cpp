#include<iostream>
using namespace std;

int main(){
    int arr[4]={45,65,23,15};
    int *p=arr;
    cout<<p<<endl;
    cout<<*p<<endl;

    int *p1=&arr[2];
    cout<<p1<<endl;
    cout<<*p1<<endl;

    cout<<"The address of arr is "<<arr<<endl;
    cout<<"The address of arr is "<<&arr[0]<<endl;
    cout<<"The address of arr is "<<*arr<<endl;
    cout<<"The address of arr is "<<*arr+1<<endl;
    cout<<"The address of arr is "<<*(arr+1)<<endl;
    cout<<"The address of arr is "<<arr[2]<<endl;

    cout<<"The address of arr is "<<2[arr]<<endl;

    int crr[5];
    // error
    //crr=crr+1;

    int *p5=&crr[0];
    cout<<p5<<endl;
    p5=p5+1;
    cout<<p5<<endl;


}