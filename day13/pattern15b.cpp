#include<iostream>
using namespace std;

class Solution {
    public:
    void pattern(int n){
        int i, j,k,a;
        for(i=0; i<n ;i++){
            for(k=0;k<i+1;k++){
                cout<<char(65+n-i+k);
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