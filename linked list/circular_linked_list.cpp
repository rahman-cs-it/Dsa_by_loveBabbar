#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(next!=NULL){
            delete next;
            next =NULL;
        }
        cout<<"memory free for the data "<<value<<endl;
    }
};

int main(){
    
}