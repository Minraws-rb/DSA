#include<bits/stdc++.h>
using namespace std;

void optimizeddivisor(int n) {
    int i;
    vector<int> v;
    for( i = 1 ; i*i <= n; i++) { // this loop is running for sqroot of n ie. O (n^1/2)
        if(n%i == 0) {
            v.push_back(i);
            if((n/i) != i) {
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(), v.end());// O(no of factors* log(no of factors))
    for( auto it : v) cout<< it<< " ";// O(no of factors)

}
int main() {
    optimizeddivisor(60);
    return 0;
}