#include <iostream>
using namespace std;
int main(){
    int j,k;
    int n;
    int g = 0;
    int arr[n] = {};
    cout<<"number : ";
    cin>>n;
    for(int i =0; i<n; i++){
        cout<<"array element; ";
        cin>>g;
        arr[i] = g;
    }
    cout<<arr[4]<<endl;
    cout<<arr[2];
    for (j = 0; j < n - 1; j++)
		for (k = 0; k < n - j - 1; k++)
			if (arr[k] > arr[k + 1])
				swap(arr[k], arr[k + 1]);
    cout<<arr[n];
    return 0;

}