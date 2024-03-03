#include<iostream>
using namespace std;
int  sum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }return sum;
}
int main(){
    int n;
    cout<<"Please enter the size of array : "<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"Please enter the elements of the array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ans=sum(arr,n);
    cout<<"The sum of array is "<<ans<<endl;

    while (true)
    {
        int i=9;
    }
    

    
}