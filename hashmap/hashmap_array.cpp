#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;
#include<vector>


int main()
{
    int n;
    cout<<"please enter the size of array "<<endl;
    cin>>n;
    vector<int>arr;
    cout<<"please enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i]<<" ";
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
}