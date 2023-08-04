#include <iostream>
using namespace std;

int binary(int arr[], int data, int low, int high)
{
    int mid = low + (high - low)/2;
    if (arr[mid] == data)
    {
        return mid;
    }
    else if (arr[mid]>data)
    {
       return binary(arr, data, low, mid-1);
    }
    else
    {
        return binary( arr, data, mid+1, high);
    }
    return -1;
}

int main ()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    cout<<binary(arr, 9, 1, 9);
}