#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
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

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getlenght(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}

void insertathead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertattail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertatposition(Node *&tail, Node *&head, int position, int d)
{

    if (position == 1)
    {
        insertathead(head, d);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertattail(tail, d);
        return;
    }
    Node *nodetoinsert = new Node(d);
    nodetoinsert->prev = temp;
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
}

void deletenode(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node *curr=head;
        Node *old=NULL;
        int count=1;
        while (count<position) 
        {
            old=curr;
            curr=curr->next;
            count++;
        }
       
        //curr->next->prev=old;
        old->next=curr->next;
        curr->next=NULL;
        curr->prev=NULL;
        delete curr;
        
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    print(head);

    cout << "lenght is " << getlenght(head) << endl;

    insertathead(head, 20);
    print(head);
    cout << "lenght is " << getlenght(head) << endl;

    insertathead(head, 30);
    print(head);
    cout << "lenght is " << getlenght(head) << endl;

    insertattail(tail, 100);
    print(head);
    cout << "lenght is " << getlenght(head) << endl;

    insertatposition(tail, head, 5, 50);
    print(head);
    cout << "lenght is " << getlenght(head) << endl;
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    deletenode(head, 4);
    print(head);
    cout << "lenght is " << getlenght(head) << endl;
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
}