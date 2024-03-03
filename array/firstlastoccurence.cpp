#include<iostream>
using namespace std;

int lefocc(int arr[],int n, int key){
    int start=0;
    int end=n-1;
    int mid = start + (end-start)/2;
    int ans=-1;
    while(start<=end){
        if(key==arr[mid]){
         ans=mid;
         end=mid-1;   
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if (key<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
    }

int rigocc(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(key==arr[mid]){
            ans=mid;
            start=mid+1;
        }
        else if (key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main (){
    int n;
    n=5;
    int key;
    key=4;
    int arr[5]={1,2,3,3,5};

    int index=lefocc(arr,n,key);
    cout<<"first index is "<<index<<" ";
    index=rigocc(arr,n,key);
    cout<<"last index is "<< index<<" ";
}