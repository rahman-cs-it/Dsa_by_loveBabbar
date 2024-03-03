#include<iostream>
using namespace std;

int getmax(int arr[],int size){
    int max = INT32_MIN;
    for (int  i = 0; i < size; i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
    
}

int getmin(int arr[],int size){
    int min=INT32_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    
    int arr[100];
    int size;
    cout<<"Enter the number of elements in array: ";
    cin>>size;
    
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
   

    cout << "maximum is "<< getmax(arr,size)<<endl;
    cout << "minimum is "<< getmin(arr,size)<<endl;

}