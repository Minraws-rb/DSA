#include<iostream>
using namespace std;

class Solution {
    public:
    void pattern(int n){
        int i, j=0,k;
        for(i=0; i<n ;i++){
            for(k=0;k<i+1;k++){
                cout<< ++j<<" ";
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