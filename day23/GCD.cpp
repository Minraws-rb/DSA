#include<bits/stdc++.h>
using namespace std;

void gcd(int n1, int n2) {// O(n^2) time complexity not a good code
    int i, j, gcd =0;
    for( i=n1; i>=1 ; i--) {
        if(n1%i == 0) {
            for( j= n2; j>=1; j--){
                if( n2%j == 0){
                    if(i == j) {
                        gcd = i;
                        break;
                    }
                } 
                if(gcd != 0) break;  
        }
            if(gcd != 0) break;  
        }
    }
    cout<< gcd;
}

int main() {
    gcd(30,20);
    return 0;
}