#include <iostream>
using namespace std;

void selectionsort(int A[], int n){
    int min, i, j, temp;
    for(i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
        {
            if (A[j]<A[min])
            {
                min = j;
            }
            
        }
        
        temp = A[min];
        A[min] = A[i];
        A[i] = temp;
    }
    
    cout<<"\n"<<"Sorted array = ";
    for (int k = 0; k < n; k++)
    {
        cout<<A[k];
    }
    
}

int main(){
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
    selectionsort(R, size);

}