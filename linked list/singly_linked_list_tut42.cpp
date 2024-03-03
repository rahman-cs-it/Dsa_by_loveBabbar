#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free Now " << value << endl;
    }
};

// Inserting at head
void insertathead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

// Inserting at tail/last
void insertattail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// Inserting at any position
void insertatposition(Node *&tail, Node *&head, int position, int d)
{
    // case for inserting at element at first position or before the head element
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

    // case for updating the tail at last position
    if (temp->next == NULL)
    {
        insertattail(tail, d);
        return;
    }

    Node *nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

// Printing the linked list
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

void deletenode(int position, Node *&head)
{
    // deleting the first element
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // freeing memory
        temp->next = NULL;
        delete temp;
    }

    // deleting middle and last element
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
void deletenode1(int position, Node *&head, Node *&tail)
{
    // Deleting the first element
    if (position == 1)
    {
        Node *temp = head;

        // Move the head to the next node (assuming head->next is not NULL)
        head = head->next;

        // Freeing memory
        temp->next = nullptr;
        delete temp;

        // If head is now null, update the tail as well
        if (head == nullptr)
        {
            tail = nullptr;
        }
    }
    // Deleting middle and last element
    else
    {
        Node *curr = head;
        Node *prev = nullptr;
        int count = 1;

        while (count < position )
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        if (curr != nullptr)
        {
            // If the node to delete is the last one, update the tail
            if (curr->next == nullptr)
            {
                tail = prev;
            }

            prev->next = curr->next;
            curr->next = nullptr;
            delete curr;
        }
    }
}



int main()
{
    Node *node1 = new Node(10);
    // cout<< node1->data<<endl;
    // cout<< node1->next<<endl;

    Node *head = node1;
    Node *tail = node1;

    print(head);

    insertattail(tail, 20);

    print(head);

    insertattail(tail, 30);

    print(head);

    insertatposition(tail, head, 4, 15);
    print(head);

    cout << head->data << endl;
    cout << tail->data << endl;

    /* deletenode(4, head);
  
    print(head);

    cout << head->data << endl; */
   

    deletenode1(4,head, tail);

    print(head);

    
    cout << tail->data << endl;
}