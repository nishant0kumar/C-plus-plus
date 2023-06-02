#include <iostream>
using namespace std;
int main(){
  int n;
 string alphabet[26]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
 cout<<"Enter no of rows ; ";
 cin>>n;
 if(n<=26){
 for(int i=0; i<n; i++){
  cout<<alphabet[i];
  for(int j=i-1; j<i; j--){
    if (j == -1)
    {
      break;
    }
    else
    {
      cout<<alphabet[j];
    }
  }
  cout<<endl;
 }
 }
 else
 {
  cout<<"There are only 26 alphabet. Enter value smaller than 27";
 }
 return 0;
}