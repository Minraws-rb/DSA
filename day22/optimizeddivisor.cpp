#include<bits/stdc++.h>
using namespace std;

void optimizeddivisor(int n) {
     int i, div[2000], k = 0;
     for(i = 1 ; i*i<= n ; i++) {
        if(n%i == 0){
            div[k] = i;
            k++;
            if(i != n/i) {
                div[k] = n/i;
            k++;
            }
        }
     }
     sort( div, div + k);
     for(i = 0; i < k ; i++) {
        cout<< div[i]<<" ";
     }
}
int main() {
    optimizeddivisor(60);
    return 0;
}