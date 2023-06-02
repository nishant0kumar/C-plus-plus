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
/* #include <iostream>
using namespace std;
#include <string.h>

void stack(){
    cout<<"Enter your choice : "<<"\n"<<"1 peek ; "<<"\n"<<"2 Print stack = "<<"\n"<<"3 Push = "<<"\n"<<"4 Pop elemetn = "<<"\n";

    int choice = 0;
    cout<<"Enter your choice = ";
    cin>>choice;

    if(choice==1){
        cout<<A[n];
    }
    else if (choice==2)
    {
        cout<<"Stack = ";
        for (int i = 0; i < n; i++)
        {
            cout<<A[i]<<" ";
        }
    }
    else if (choice == 3)
    {
        if (A[])
        {
        
        }
        
    }
    
    
} */


/* #include <iostream>
using namespace std;

#define MAX_SIZE 100

class Stack {
private:
  int top;
  int arr[MAX_SIZE];
public:
  Stack() {
    top = -1;
  }
  bool push(int x) {
    if (top >= MAX_SIZE - 1) {
      cout << "Stack Overflow" << endl;
      return false;
    }
    arr[++top] = x;
    return true;
  }
  int pop() {
    if (top < 0) {
      cout << "Stack Underflow" << endl;
      return -1;
    }
    int x = arr[top--];
    return x;
  }
  int peek() {
    if (top < 0) {
      cout << "Stack is empty" << endl;
      return -1;
    }
    return arr[top];
  }
  bool isEmpty() {
    return (top < 0);
  }
};

int main() {
  Stack s;
  s.push(1);
  s.push(2);
  s.push(3);
  cout << "Current top element: " << s.peek() << endl;
  cout << "Popping elements: " << s.pop() << " " << s.pop() << " " << s.pop() << endl;
  if (s.isEmpty()) {
    cout << "Stack is empty" << endl;
  }
  return 0;
} */