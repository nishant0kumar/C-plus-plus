#include <iostream>
using namespace std;

class node
{
    public:
        int data;
        node* prev;
        node* next;
    public:
        node(int value)
        {
            data = value;
            next = NULL;
            prev = NULL;
        }
};

class doubly
{
    private:
        node* head;
        node* tail;
    public:
        doubly()
        {
            head = NULL;
            tail = NULL;
        }

        void append(int value)
        {
            node* n = new node(value);
            if (head == NULL)
            {
                head = tail = n;
            }
            else
            {
                tail->next = n;
                n->prev = tail;
                tail = n;
            }
        }

        void displayforward()
        {
            node* current = head;
            while (current != NULL)
            {
                cout<<current->data;
                current = current->next;
            }
            cout<<endl;
        }

        void displaybackward()
        {
            node* current = tail;
            while (current != NULL)
            {
                cout<<current->data;
                current = current->prev;
            }
            cout<<endl;
        }
};

int main()
{
    doubly dll;

    dll.append(5);
    dll.append(4);
    dll.append(3);
    dll.append(2);
    dll.append(1);
    cout<<"in forward";
    dll.displayforward();
    cout<<"in backward";
    dll.displaybackward();
}