#include<iostream>
using namespace std;

class Solution {
    public:
    void pattern(int n){
        int i, j, k;
        for( i =0; i<n; i++)
        { 
            for( k= 0; k<n - i+1; k++ ){
                cout<<" ";
            }
            for ( j = 0; j<=i ; j++)
            {
                cout<<"*";
            }
             for ( j = 0; j<i ; j++)
            {
                cout<<"*";
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