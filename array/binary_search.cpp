#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key){
    int start=0;
    
    int end = n-1;

    int mid = (start + end)/2;

    while(start<=end){
        if(key == arr[mid]){
            return mid;
        }
        if (key > arr[mid]){
            start = mid + 1;
        }
        else {
            end = mid -1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int n;
    n=5;
    int arr[5]={3,5,9,13 ,27};

    int index= binarysearch(arr,5,9);
    cout << "index of 9 is "<< index<<endl;    
   
}