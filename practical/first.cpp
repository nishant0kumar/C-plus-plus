#include <iostream>
using namespace std;

int main()
{
    int n=5, arr[n]= {};
    for(int i=0; i<=n; i++){
        cout<<"Enter any number = ";
        cin>>arr[i];
    }
    cout<<"{";
    for (int i = 0; i <= n; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<"}";

    return 0;
}