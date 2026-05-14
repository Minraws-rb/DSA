#include<bits/stdc++.h>
using namespace std;

void gcd(int n1, int n2) {// time complexity is O(min(n1,n2))
    int i, gcd, n;
    n = min(n1,n2);
    for(i=n; i>=1; i--) {
        if(n1 %i ==0 && n2%i == 0){
            gcd = i;
            break;
        }
    }
    cout<< gcd;
}

int main() {
    gcd(20, 40);
    return 0;
}