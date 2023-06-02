#include <iostream>
using namespace std;

#define max 50

class stack{
    private:
        int top;
        int arr[max];
    public:
        stack(){
            top = - 1;
        }

        bool push(int x){
            if (top >= max - 1)
            {
                cout<<"Overflow"<<endl;
                return false;
            }
            arr[++top] = x;
            return true;
        }

        int pop(){
            if (top < 0)
            {
                cout<<"Underflow"<<endl;
                return -1;
            }
            int x = arr[top--];
            return x;
        }

        int peek(){
            if (top < 0)
            {
                cout<<"NO element present in stack"<<endl;
                return -1;
            }
            return arr[top];
        }

        bool empty(){
            return (top<0);
        }

};


int main(){
    stack s;
    int choice, element, num_element,continues, pop_element;
    cout<<"Do you want to continue(1 = yes) = ";
    cin>>continues;
    while (continues == 1){
        cout<<"Enter your choice (1 = push,2 = peek or 3 = pop) = ";
        cin>>choice;
        if (choice == 1)
        {
            cout<<"Enter number of element you want to push = ";
            cin>>num_element;
            cout<<"Enter your element = ";
            for (int i = 0; i < num_element; i++)
            {
                cin>>element;
                s.push(element);
            }
        }
        else if (choice == 2)
        {
            if (s.empty())
            {
                cout<<"Stack is empty";
            }
            else{
                cout<<"Top of stack = "<<s.peek();
            }    
        }
        else{
            cout<<"Enter number of element you want delete = ";
            cin>>pop_element;
            cout<<"Deleted element(s) = ";
            for (int i = 0; i < pop_element; i++)
            {
                cout<<" "<<s.pop();
            }
            
        }
        cout<<"\n"<<"DO you want to continue one more time(1=yes) = ";
        cin>>continues;
    }
    cout<<"Come back next time";

    return 0;
}