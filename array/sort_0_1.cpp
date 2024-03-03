#include<iostream>
using namespace std;


void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void sortarray(int arr[],int n){
    int start=0,end=n-1;
    while(start<end){
        while(arr[start]==0 && start<end){
            start++;
        }
        while(arr[end]==1 && start<end){
            end--;
        }
        
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}


int main(){
    int n=8;
    int arr[8]={1,1,0,0,0,0,1,0};

    sortarray(arr,n);
    printarray(arr,n);
}