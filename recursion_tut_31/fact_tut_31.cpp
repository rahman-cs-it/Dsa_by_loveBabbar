#include<iostream>
using namespace std;

int factorial(int n){
    //Base case
    if(n==0){
        return 1;
    }

    //Recursive Relation
    int smallerproblem=factorial(n-1);
    int biggerproblem = n*smallerproblem;
    return biggerproblem;
}

int main(){
    int n;
    cout<<"Please enter the number "<<endl;
    cin>>n;
    
    int ans=factorial(n);
    cout<<"The ans is "<<ans<<endl;
}