#include <iostream>
using namespace std;

void selection(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minimum = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[minimum])
            {
                minimum = j;
            }
            
        }

        int temp = arr[i];
        arr[i] = arr[minimum];
        arr[minimum] = temp;
    }
        
}

int main()
{
    int arr[] = {9,8,7,4,5,6,2,1,3};
    selection(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
    
}