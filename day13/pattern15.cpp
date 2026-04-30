#include<iostream>
using namespace std;

class Solution {
    public:
    void pattern(int n){
        int i, j,k,a;
        for(i=0; i<n ;i++){
            for(j=0;j<n-1-i;j++){
                cout<<" ";
            }
            for(k=0;k<i+1;k++){
                 a=65+k;
                cout<<char(a);
            }
             for(k=0;k<i;k++){
                cout<<char(a-k-1);
            }
            cout<<endl;
        }
    }
};

int main(){
    Solution obj;
    obj.pattern(5);

    return 0;
}