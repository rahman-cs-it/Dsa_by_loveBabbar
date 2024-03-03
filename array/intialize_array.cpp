#include<iostream>
using namespace std;

void printarray(int arr[],int size){
     for (int i=0;i<size;i++){
        cout<< arr[i]<< " ";
    }
    cout << endl;
}

void chararray(char arr[],int size){
    for(int i=0;i<size;i++){
        cout<< arr[i]<< endl;
    }
}
int main (){
    
    int n=5;
    int arr[5]={0,1,2};
    printarray(arr,n);

    n=8;
    int fir[8]={1,2,3};
    printarray(fir,n);

    int firsize=sizeof(fir)/__SIZEOF_INT__;
    cout << firsize << endl;

    int arrsize=sizeof(arr)/sizeof(int);
    cout << arrsize<< endl;

    n=3;
    char first[3]={'a','g','t'};
    chararray(first,n);
   
}