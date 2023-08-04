#include <iostream>
using namespace std;

class node
{
    public:
        int data;
        node* left;
        node* right;
    public:
        node(int value)
        {
            data = value;
            left = NULL;
            right = NULL;
        }
};

node* head = NULL;

void insert(int value)
{
    node* n = new node(value);
    if (head = NULL)
    {
        head = n;
    }
    else
    {
        cout<<"IN left or right 1 or 2";
        int no;
        cin>>no;
        if (no == 1)
        {
            node* root = head;
            if (left == NULL)
            {
                root->left = n;
            }
            else
            {
                while (root != NULL)
                {
                    root = root->left;
                }
                root =  n;
                root->left = root;
                
            }
        }
        else
        {
            node* root = head;
            while (root != NULL)
            {
                root = root->right;
            }
            root = n;
            root->right = root;
            
        }
    }
    
}

void print()
{
    node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data;
        temp = temp->left;
    }
    cout<<endl;
    node* root = head;
    while (root != NULL)
    {
        cout<<root->right;
        root = root->right;
    }
    cout<<endl;
    
    
}

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    print();
}