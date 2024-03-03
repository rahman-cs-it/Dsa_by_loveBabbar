#include<iostream>
using namespace std;

int main(){

    /* this is to find the whether integer is positive or negative or 0
    int a;
    cout << "Please enter the value of a" << endl;
    cin >> a;

    if (a>0) {
        cout << "a is positve " << endl;
    }
    else if (a<0)
    {
        cout << "a is negative" << endl;
    }
    else {
        cout << "a is 0" << endl;
    }
    */
    
/* this algo is to find the whether the given input is small charcter or big character or decimal or special character
    char c;
    cout << "Please enter something " << endl;
    cin >> c;

    if (c>='a' && c<='z')
    {
        cout << "It is a small character " << endl;
    }
    else if (c>='A' && c<='Z')
    {
        cout << "It is a big character" << endl;
    
    }
    else if (c>='0' && c<='9')
    {
        cout << "It is a decimal number " << endl;
    }
    else{
        cout << "It is a special character " << endl;
    }
*/

/* this is algo is to print the numbers from 1 to n
int n;
cout << "please enter any number"<< endl;
cin >> n;

int i = 1;

while (i<=n){
    cout << i <<",";
    i=i+1;
}
*/

/*this is algo is to find the even number from 1 to n
int n;
cout << "please enter your number " << endl;
cin >> n;

int i=1;
while(i<=n){
    
    if ( i % 2 == 0)
    {
        cout << i <<",";
    
    }
    
    i=i+1;

}
*/

/*this is algo is to find the odd number from 1 to n
int n;
cout << "please enter your number " << endl;
cin >> n;

int i=1;
while(i<=n){
    
    if ( i % 2 != 0)
    {
        cout << i <<",";
    
    }
    
    i=i+1;

}
*/

/* This is algo is to find the sum of numbers from 1 to n
int n;
cout << "please enter your number "<< endl;
cin >> n;

int i=1,sum=0;

while (i<=n){
    sum = sum +i;
    i=i+1;
}
cout << sum << endl;
*/
    
/* this algo is used for whether the number is prime or not 
int n;
cout << "please enter you number" << endl;
cin >> n;

int i = 2 ;
while (i<n){
    if (n%i==0)
    {
        cout << "it is not a prime number of  "<< i << endl;

    }
    else  {
        cout << "prime number of "<<i << endl;
    }
    
    i=i+1;
}
*/

}