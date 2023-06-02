#include <iostream>
using namespace std;

void linear(int A[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if (key==A[i])
        {
            cout<<"Element index = "<<i;
        }
        
    }
    
}

int main(){
    int R[] = {1,2,3,4,5,6,7,8,9,10};
    int key;
    int n = 10;

    cout<<"Enter a element to be search = ";
    cin>>key;

    linear(R,n,key);
}