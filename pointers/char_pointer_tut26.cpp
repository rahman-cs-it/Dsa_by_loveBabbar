#include<iostream>
using namespace std;

int main(){

    int arr[5]={0,1,2,3,4};
    char ch[7]="abcdef";

    cout<<arr<<endl;
    cout<<ch<<endl;
    cout<<ch[0]<<endl;
    cout<<ch[1]<<endl;
    cout<<ch[2]<<endl;
    cout<<ch[3]<<endl;
    cout<<ch[4]<<endl;
    cout<<ch[5]<<endl;
    cout<<ch[6]<<endl;
    
    char *c =&ch[0];
    cout<<c<<endl;
    cout<<*c<<endl;

    char temp='z';
    char *p1=&temp;
    cout<<p1<<endl;
    cout<<*p1<<endl;
}