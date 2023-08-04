#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int* p;
    p = &a;
    int* s = p;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<s<<endl;
    cout<<*s<<endl;
    return 0;    
}