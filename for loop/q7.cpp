#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cout << "Please enter number"<<endl;
    cin>> n;

    int ans=0;
    int prod=1;

    while (n!=0)
    {
        int bit=n&1;
        ans=ans+bit * prod;
        prod=prod*10;
        n=n>>1;
    }
    cout<<ans;
    

    
}