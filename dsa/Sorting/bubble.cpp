#include <iostream>
using namespace std;



void bubble(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
       
}

int main()
{
    int arr[] = {10,11,5,9,6,7,8,4,2,3,1};
    bubble(arr, 11);
    for (int i = 0; i < 11; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}