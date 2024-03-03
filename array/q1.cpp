#include<iostream>
using namespace std;

int arr(int x,int y){
    int sum=x+y;
    return sum ;
}

int main(){
    int a;
    cin >> a;
    int b;
    cin >> b;
    int sum=arr(a,b);
    
    cout<< sum;
}