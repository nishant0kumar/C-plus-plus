/* #include <iostream>
using namespace std;

#define max 50

class Queue{
    private:
        int arr[max];
        int frontIdx;
        int rearIdx;
    public:
        Queue() : frontIdx(-1), rearIdx(-1) {}

        bool isEmpty(){
            return (frontIdx == -1);
        }

        bool isFull(){
            return (frontIdx == -1);
        } 

        void enqueue(int data){
            if (isFull()){
                cout<<"Queue is full."<<endl;
            }

            if (isEmpty()){
                frontIdx = 0;
            }
            arr[++rearIdx]= data;
        }

        void dequeue() {
            if (isEmpty()){
                cout<<"Queue is empty."<<endl;
                return;
            }

            if (frontIdx == rearIdx)
            {
                frontIdx = -1;
                rearIdx = -1;
            }
            else{
                frontIdx++;
            }
            
        }

        int front(){
            if (isEmpty()){
                cout<<"Queue is empty"<<endl;
                return -1;
            }

            return arr[frontIdx];
        }
};

int main(){
    Queue my;

    my.enqueue(10);
    my.enqueue(5);
    my.enqueue(15);

    while(!my.isEmpty()){
        cout<<my.front() <<" ";
        my.dequeue();
    }

    return 0;
}
 */

#include <iostream>
using namespace std;

# define n 20

class queue{
    int* arr;
    int front;
    int back;

    public:
        queue(){
            arr = new int[n];
            front = -1;
            back = -1;
        }
    void push(int x){
        if(back==n-1){
            cout<<"queue overflow"<<endl;
            return;
        }
        back++;
        arr[back] =x;
        if(front==-1){
            front++;
        }
    }

    void pop(){
        if(front==-1 || front>back){
            cout<<"no element"<<endl;
            return;
        }
        front++;
    }

    int peek(){
        if(front==-1 || front>back){
            cout<<"no element"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        if(front==-1 || front>back){
            return true;
        }
        return false;
    }
};

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.empty()<<endl;

    return 0;
}
