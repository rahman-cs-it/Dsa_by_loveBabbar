#include<iostream>
using namespace std;

int power(int n){
    //Base case
    if (n==0)
    return 1;
    
    //Recursive relation
    return 2*power(n-1);
}

int main (){
    int n;
    cout<<"Please enter the number "<<endl;
    cin >> n;

    int ans = power(n);
    cout <<"The ans is "<< ans<<endl;
}