#include <iostream>
using namespace std;

int main(){
    int n,i=1;
    string p = "*",d;
    cout<<"Enter even number for rows = ";
    cin>>n;
    if (n%2==0)
    {
        for (i; i<=n; i++)
        {
            d += p;
            cout<<d<<endl;
        }

    }
    else{
        cout<<"Input even number for rows";
    }
    return 0;
}