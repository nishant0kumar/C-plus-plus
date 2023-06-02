#include <iostream>
using namespace std;

int main(){
    int num,n,t=0;
    int length=1;
    cout<<"Enter a number - ";
    cin>>num;
    int x=num;
    while (x/=10)
    {
        length++;
    }
    cout<<length<<endl;
    
    for (int i = 0; i < length; i++)
    {
       n = num%10;
       cout<<n;
        t +=n;
       num /=10;
    }
    cout<<"--reverse of number"<<endl<<"Sum of number digit ="<<t;
    return 0;
    
}