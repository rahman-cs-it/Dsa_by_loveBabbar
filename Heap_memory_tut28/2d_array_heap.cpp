#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Please enter the size of the row"<<endl;
    cin>>m;

    int n;
    cout<<"Please enter the size of the col"<<endl;
    cin>>n;

    int **arr=new int *[m];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}