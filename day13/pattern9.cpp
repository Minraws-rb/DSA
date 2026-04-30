#include<iostream>
using namespace std;

class Solution {
    public:
    void pattern(int n){
        int i, j;
        for(i=0; i<n ;i++){
            for(j= 0; j<i+1; j++){
                if(i%2==0){
                    if(j%2==0){
                        cout<<"1";
                    }
                    else{
                        cout<<"0";
                    }
                }
                else {
                    if(j%2==0){
                        cout<<"0";
                    }
                    else{
                        cout<<"1";
                    }
                }
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