#include <iostream>
using namespace std;

class stack
{
    public:
        int data;
        stack* next;

    stack(int value)
    {
        data = value;
        next = NULL;
    }
};

stack* head = NULL;

void pushatend(stack* &head, int value)
{
    stack* newnode = new stack(value);
    if (head == NULL)
    {
        head = newnode;
    }

    stack* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;
}

void pop(stack* &head)
{
    stack* temp = head;
    if (head == NULL)
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
        
    }
}

void size()
{
    stack* temp = head;
    while (temp->next != NULL)
    {
        cout<<temp->data;
        temp = temp->next;
    }

    
}

int main()
{
    pushatend(head,5);
    pushatend(head,4);
    pushatend(head,3);
    size();
    pop(head);
    size();
}