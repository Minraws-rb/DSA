#include<iostream>
using namespace std;

class Solution {
    public:
    void pattern(int n){
        int i, j,k;
        for(i=0; i<n ;i++){
            for(k=0;k<i+1;k++){
                cout<< k+1;
            }
            for(j=0; j<(n-1-i)*2;j++){
                cout<<" ";
            }
            for(k=0;k<i+1;k++){
                cout<< k+1;
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