#include <iostream>
using namespace std;

class node
{
    public:
        int data;
        node* next;
    public:
        node(int value)
        {
            data = value;
            next = NULL;
        }
};

node* head = NULL;

void insertstart(int value)
{
    node* temp = new node(value);
    temp->data = value;
    temp->next = head;
    head = temp;
}

void insertend(node* &head, int value)
{
    node* newnode = new node(value);
    if (head == NULL)
    {
        head = newnode;
    }
    
    node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;   
}

void insertanywhere(node* head, int value , int position)
{
    node* newnode = new node(value);
    if (head == NULL || position == 1)
    {
        head = newnode;
    }

    node* temp = head;
    int count = 1;
    while (temp->next != NULL && count<position-1)
    {
        temp = temp->next;
        count++;
    }
    

    if (temp->next == NULL)
    {
        temp = head;
        while (temp->next == NULL)
        {
            temp = temp->next;
        }
        
    }

    newnode->next = temp-> next;
    temp->next = newnode;
    
}

void print()
{
    node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    
}

void deletes(node* head)
{
    node* temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
    
}

int main()
{
    insertstart(1);
    insertstart(2);
    insertstart(3);
    insertend(head,7);
    insertend(head,8);
    insertend(head,9);
    insertanywhere(head,4,4);
    insertanywhere(head,5,5);
    insertanywhere(head,6,6);
    print();
    deletes(head);
    print();
}