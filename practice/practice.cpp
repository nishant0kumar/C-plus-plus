#include <iostream>
using namespace std;

class Solution {
    public:
        int arrayOperations(int n, int arr[]){
            for(int i=0;i<n;i++){
                if(arr[i]==0){
                    cout<<i;
                    
                }
            }
        }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        Solution  obj;
        int res = obj.arrayOperations(n,arr);

        cout<<res<<endl;
    }
}