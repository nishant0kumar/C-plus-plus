#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter your number = ";
    cin>>n;
    for (int i=2; i<=n; i++){
        if (n%i==0 and i==n)
        {
            cout<<"Prime number";
            break;
        }
        else if (n%i==0 and i<n){
            cout<<"Not a prime number";
            break;
        }
        }

    return 0;
}