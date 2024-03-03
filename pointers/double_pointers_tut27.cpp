#include<iostream>
using namespace std;

void update(int **p1){
    p1=p1+1;
    //kuch change hoga -


    //*p1=*p1+1;
    //kuch change hoga -
    
    
    //**p1=**p1+1;
    //kuch change hoga - 
}

int main(){

    int i=8;
    int *p=&i;
    int **p1=&p;

  /*   cout<<"The value of i directly is "<<i<<endl;
    cout<<"The value of i through p is "<<*p<<endl;
    cout<<"The value of i through p1 is "<<**p1<<endl;

    cout<<"The address of i directly is "<<&i<<endl; 
    cout<<"The address of i through p is "<<p<<endl; 
    cout<<"The address of p through p1 is "<<p1<<endl; 
     */

    cout<<endl<<endl<<endl;
    cout<<"Before "<<i<<endl;        
    cout<<"Before "<<p<<endl;        
    cout<<"Before "<<p1<<endl;     

    update(p1);
    cout<<"After "<<i<<endl;   
    cout<<"After "<<p<<endl;   
    cout<<"After "<<p1<<endl;   

}