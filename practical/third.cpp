#include <iostream>
using namespace std;

int main()
{
    int num;
    int arr[num]={};
    cout<<"Enter a number = ";
    cin>>num;
    cout<<"{";
    for (int i=1; i<=num ; i++)
    {
        if(num%i==0)
        {
            arr[i-1]=i;
            cout<<i<<",";
        }
    }
    cout<<"}";
    return 0;
}