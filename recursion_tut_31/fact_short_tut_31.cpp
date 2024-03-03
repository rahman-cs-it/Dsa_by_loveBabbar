#include<iostream>
using namespace std;

int factorial(int n){

    //base case 
    if(n==0)
        return 1;
    
    // Recursive relation
    return n*factorial(n-1);
}

int main(){
    int n;
    cout<<"Please enter the number "<<endl;
    cin>>n;
    
    int ans=factorial(n);
    cout<<"The ans is "<<ans<<endl;
}