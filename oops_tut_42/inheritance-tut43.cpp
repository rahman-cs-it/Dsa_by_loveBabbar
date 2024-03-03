#include<iostream>
using namespace std;

class Human{
    public:
        int age;
        int height;
        int weight;

    
    int getage(){
        return this->age;
    }
    int setweight(int w){
        return this->weight=w;
    }
};

class Male : public Human{
    public:
    string color;
    
    void sleep(){
        cout<<"i am sleeping write now "<<endl;
    }
};



int main(){
    cout<<"sab badhiya chal raha hai "<<endl;
    Male rahman;
    cout<<rahman.age<<endl;
    cout<<rahman.color<<endl;
    cout<<rahman.height<<endl;
    cout<<rahman.weight<<endl;
    cout<<rahman.setweight(10)<<endl;
    rahman.sleep(); 

}