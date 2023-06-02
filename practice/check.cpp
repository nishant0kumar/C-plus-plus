#include <iostream>
using namespace std;

void function(){
	int n = 5;
	 string alphabet[26]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
 //cout<<"Enter no of rows ; ";
 //cin>>n;
 for(int i=0; i<n; i++){
    cout<<alphabet[i];
  for(int j=0; j<i; j++){
    cout<<alphabet[j];
  }
  //function();
  cout<<endl;
}
}
int main(){ 
	function();

return 0;
}
