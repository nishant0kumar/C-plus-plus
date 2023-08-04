#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;


    node(int val){
        data = val;
        next=NULL;
    }


};

void insert(node* &head, int val){

    node* n = new node(val);

    if(head==NULL){
        head = n;
        return; 
    }

    node* temp= head;
    while(temp->next!=NULL){
        temp = temp -> next;
    }
    temp -> next = n;
}

void insertathead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head= n;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    node* head= NULL;
    insert(head,1);
    insert(head,2);
    insert(head,2);
    insert(head,2);
    display(head);
    insertathead(head,5);
    display(head);
    return 0;
}