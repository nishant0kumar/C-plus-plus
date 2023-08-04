#include <iostream>
using namespace std;

#define max 50

class stack
{
    private:
        int arr[max];
        int top;
    public:
        stack()
        {
            top = -1;
        }

        void push(int value)
        {
            if (top==max-1)
            {
                cout<<"Overflow!!"<<endl;
            }
            else
            {
                top++;
                arr[top] = value;  
            }
        }
    
        void pop()
        {
            if (top<=0)
            {
                cout<<"Underflow!!"<<endl;
            }
            else
            {
                top--;
            }
            
        }

        int peek()
        {
            if (top<=0)
            {
                /* cout<<"Underflow"<<endl; */
                return -1;
            }
            else
            {
                return arr[top];
            }
            
        }
};

int main()
{
    stack s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    s.pop();
    s.pop();
    s.pop();
    cout<<s.peek();

}