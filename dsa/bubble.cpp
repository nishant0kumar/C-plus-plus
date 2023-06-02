#include <iostream>
using namespace std;

//declaring function(void) and initializing
void buublesort(int A[], int n){
    //loop for first element of array
    for (int pass = n; pass >=0; pass--)
    {
        //second loop for comparison between two elements
        for (int i = 0; i < pass-1; i++)
        {
            //conditions for checking and swapping between elements
            if (A[i]>A[i+1])
            {
                int bin = A[i];
                A[i]=A[i+1];
                A[i+1]=bin;

            }
            
        }
        cout<<"Every instance = ";
        //loop for evey pass
        for (int i = 0; i < n; i++)
        {
            cout<<A[i];
        }
        cout<<"\n";
        
        
    }

    //loop for the output
    cout<<"Your sorted array = ";
    for (int i = 0; i < n; i++){
        cout<<A[i]<<" ";
    }
    
    
}

int main(){
    //declaring variables
    int R[50], size;

    //taking input of number of elements
    cout<<"Enter number of elements in array : ";
    cin>>size;

    //taking input of elements
    cout<<"Enter your number for array elemets : ";
    //loop for the input elements in array(R)
    for (int i = 0; i < size; i++)
    {
        cin>>R[i];
    }

    //calling function
    buublesort(R, size);
    
}