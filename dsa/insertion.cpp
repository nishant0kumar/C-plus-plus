#include <iostream>
using namespace std;

void insertionsort(int A[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (A[j]>A[i])
            {
                int bin = A[i];
                A[i]=A[j];
                A[j]=bin;
            }
            
        }

        //Every pass
        cout<<"Every pass = ";
        for (int pass = 0; pass < n; pass++)
        {
            cout<<A[pass];
        }
        cout<<"\n";

    }

    //output
    cout<<"Sorted array = ";
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<"\n";
    
    
}


//insertion with less time complexity( without using nested loop)
void insertionsortwithoutloop(int A[], int n){
    int i, v, j;
    for (i = 1; i < n; i++)
    {
        v = A[i];
        j=i;
        while (A[j-1] >v && j>=1)
        {
            A[j] = A[j-1];
            j--;
        }
        A[j]=v;

        //every pass
        cout<<"Every pass = ";
        for (int k = 0; k < n; k++)
        {
            cout<<A[k];
        }
        cout<<"\n";
        
        
    }

    cout<<"Sorted array =";
    for (int m = 0; m < n; m++)
    {
        cout<<" "<<A[m];
    }
    
     
}

int main(){
    int R[50], size;
    
    //taking input of number of elements
    cout<<"Enter number of elements in array : ";
    cin>>size;

    //taking input of elements
    cout<<"Enter your number for array elemets : "<<endl;

    //loop for the input elements in array(R)
    for (int i = 0; i < size; i++)
    {
        cin>>R[i];
    }

    //calling functions
    /* cout<<"Inserton sort with neested loop"<<endl;
    insertionsort(R, size); */
    
    cout<<"Insertion sort without nested loop"<<endl;
    insertionsortwithoutloop(R, size);

}