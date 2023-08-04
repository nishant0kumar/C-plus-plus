#include <iostream>
using namespace std;

void insertion(int arr[], int n)
{
    int i,j,v;
    for (i = 0; i < n; i++)
    {
        v = arr[i];
        j = i;
        while (arr[j-1]> v&& j>=1)
        {
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = v;
    }
}

int main()
{
    int arr[] = {9,8,7,4,5,6,2,1,3};
    insertion(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
    
}