#include <iostream>
using namespace std;

class Solution {
    public:
        double average(int salary[]){
            int count = 0;
            int m = 3;
        int add = 0;
        for(int i = 0; i<m; i++){
            for(int j=0; j<m; j++){
                if(salary[i]>salary[j]){
                    int temp = salary[i];
                    salary[i] = salary[j];
                    salary[j] = temp;
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            cout<<salary[i];
        }
        

        for(int k=1; k<m-1; k++){
            add = add + salary[k];
            count++ ;
        }
        int answer = add/count;
        return answer;
        }
};

int main(){
    int salary[3] = {1000, 2000 ,3000};
    Solution onj;
    cout<<onj.average(salary);

}