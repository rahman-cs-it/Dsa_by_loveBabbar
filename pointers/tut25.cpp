#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "pleas enter the value ";
    cin>>num;

    cout << "The value of num is "<<num<<endl;
    int *p1=&num;
    cout << "The address of p1 is "<< p1<<endl;
    cout << "The value of p1 is " << *p1 << endl;


    cout << "The size of num is "<< sizeof(num)<< endl;

    cout << "The size of p1 is "<< sizeof(p1)<< endl;

    int *p;
    cout << p<<endl;
    cout << *p<<endl;

    int *p2=0;
    cout << p2<<endl;
    //cout << *p2<<endl;

    int i=5;
    int *p3=0;
    p3 = &i;
    cout << p3<<endl;
    cout << *p3<<endl;

    int j=8;
    int *p4=&j;
    cout<<"j value is "<<j<<endl;
    (*p4)++;
    cout<<"j value is "<<j<<endl;

    //copying a pointer
    int *p5=p4;
    cout << p4<<"-" << p5<<endl;
    cout << *p4<<"-" << *p5<<endl;
    
    //addition concept of pointer
    int k=4;
    cout<<k<<endl;
    int *p6=&k;
    cout<<(*p6)<<endl;
    cout<<(*p6)++<<endl;
    cout<<(*p6)<<endl;
    
    cout<<p6++<<endl;
    cout<<p6<<endl;
 
}