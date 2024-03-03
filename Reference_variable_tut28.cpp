#include<iostream>
using namespace std;

void update(int &n){
    n++;
    cout<<"Function "<<n<<endl;
}

int &fuc(int n){
        int num=n;
        int &ans=num;
        return ans;
}

int main(){
    int i=8;
    int &j=i;
    /*
    cout<<"Before "<<i<<endl;
    cout<<"Before "<<j<<endl;
    i++;
    cout<<"After "<<i<<endl;
    cout<<"After "<<j<<endl;
    j++;
    cout<<"After than "<<i<<endl;
    cout<<"After than "<<j<<endl;
    */

   cout<<"Before "<< i<<endl;
   cout<<"Before "<< j<<endl;
   update(i);
   cout<<"after "<<i<<endl;
   cout<<"after "<<j<<endl;

   char ch='a';
   cout<<sizeof(ch)<<endl;

   char *c=&ch;
   cout<<sizeof(c)<<endl;
}