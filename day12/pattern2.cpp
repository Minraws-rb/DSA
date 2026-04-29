#include<iostream>
using namespace std;

class Solution {
    public:
    void pattern(int n){
        int i, j;
        for( i =0; i<n; i++)
        {
            for ( j = 0; j<=i ; j++)
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