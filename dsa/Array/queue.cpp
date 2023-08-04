/* #include <iostream>
using namespace std;

# define max 100

class queue
{
    private:
        int arr[max];
        int top;
        int rear;
    public:
        queue()
        {
            rear = -1
            top = -1;
        }

    bool push(int x)
    [
        if(top>max-1)
        {
            cout<<"Overflow";
            return false;
        }
        arr[++top] = x;
        return true;
    ]

    bool empty()
    {
        if(top<0)
        {
            cout<<"Underflow";
            return true;
        }
        return false;
    }

    void pop()
    {
        if(empty())
        {
            
        }

        int x = arr
    }
};
 */

#include <iostream>
using namespace std;

#define max 50

class queue
{
    private:
        int arr[max];
        int rears;
        int top;
    public:
        queue()
        {
            rears = 0;
            top = -1;
        }

        void enqueue(int value)
        {
            if(top == max-1)
            {
                cout<<"Queue is full"<<endl;
            }
            else
            {
                //cout<<top<<endl;
                top++;
                //cout<<top<<endl;
                arr[top] = value;
                //cout<<arr[top]<<endl;
                //cout<<arr[rear]<<endl;
            }
        }

        void dequeue()
        {
            if (top<0)
            {
                cout<<"Queue is empty"<<endl;
            }
            else
            {
                //cout<<rears<<endl;
                cout<<arr[rears]<<endl;
                rears++;
                //cout<<rears<<endl;
            }      
        }

        int queuesize()
        {
            if (top<0)
            {
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            else
            {
                return arr[rears];
            }
        }

};

int main()
{
    queue q;
    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(3);
    q.enqueue(2);
    q.enqueue(1);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout<<q.queuesize();
    return 0;
}