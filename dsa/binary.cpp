#include <iostream>
using namespace std;

void binary(int A[], int n, int m){
    int low = 0;
    int mid;


    while (low<=m)
    {
        mid = (low + m)/2;
        if (n==A[mid])
        {
            cout<<"element index = "<<mid;
            break;
        }
        else if (n<A[mid])
        {
            m = mid-1;
        }
        else{
            low = mid+1;
        }
        
    }
    
}

int main(){
    int R[]= {1,2,3,4,5,6,7,8,9};
    int size = 10;
    int search;

    cout<<"Enter a element to be search = ";
    cin>>search;

    binary(R, search, size);
}


/* #include <iostream>
using namespace std;

int binarysearchrecursive(int A[], int low, int high, int data){
    int mid = low + (high - low)/2;
    if(low<high){
        return -1;
    }
    if (A[mid]== data){
        return mid;
    }
    else if (A[mid]<data){
        return binarysearchrecursive(A, mid+1, high, data);
    }
    else{
        return binarysearchrecursive(A, low, mid-1, data);
    }    

}

int main(){
    int R[10] = {5,3,6,9,98,8,4,65,45,87};
    int low = 0;
    int high = 9;
    int data;
    cout<<"Enter a element to be search = ";
    cin>>data;

    cout<<binarysearchrecursive(R, low, high, data);
    return binarysearchrecursive(R,low,high,data);
} */