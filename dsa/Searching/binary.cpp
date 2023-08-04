#include <iostream>
using namespace std;

int binary(int arr[], int n, int data)
{
    int low = 0;
    int high = n-1;
    while (low<=high)
    {
        int mid = low + (high-low)/2;
        if (arr[mid] == data)
        {
            return mid;
        }
        else if (arr[mid]<data)
        {
            low = mid + 1;
        }
        else if (arr[mid]>data)
        {
            high = mid -1;
        }
    }
   return -1;     
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    cout<<binary(arr, 10, 10);
}