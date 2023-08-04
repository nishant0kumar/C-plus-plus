#include <iostream>
using namespace std;

int linear(int arr[], int n, int data)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == data)
        {
            return 1;
        }
        
    }
    return -1;
    
}

int main()
{
    int arr[] = {9,8,7,6,5,4,3,2,1,0};
    cout<<linear(arr, 10, 2);
}