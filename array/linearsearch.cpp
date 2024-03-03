#include<iostream>
using namespace std;

bool findvalue(int arr[],int n, int key){
    for (int i=0 ; i<n ;i++){
        if(key==arr[i]){

        return 1;
        }
    }
    return 0;
}

int main(){
    int arr[5]={5,3,4,6,7};
    int value;
    cout <<"Please enter the value that you want to find " << endl;
    cin >>value ;

    bool found=findvalue(arr,5,value);
    if (found){
        cout<<"The element is present in array"<<endl;
        }
    else{
            cout<<"element not found"<<endl;
    }   



}