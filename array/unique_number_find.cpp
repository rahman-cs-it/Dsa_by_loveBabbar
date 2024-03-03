#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{

    //Write your code here
    int ans=0;
    for(int i=0;i<size;i++){
         ans=ans^arr[i];
         
    }
    
    return ans;
}

int main(){
    
    int n=7;
    int arr[7]={1,1,2,2,3,3,4};
    cout << "The unique element is: "<<findUnique(arr,n);

}