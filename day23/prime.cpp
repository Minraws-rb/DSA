#include<bits/stdc++.h>
using namespace std;

void prime(int n) {
    int i, c = 0;
    for(i = 1 ; i*i<= n ; i++) {
        if(n%i == 0) {
            c++;
            if(i != n/i) {
                c++;
            }
        }
    }
    if(c == 2) {
        cout<<"Prime";
    } else {
        cout<<"Not Prime";
    }
}

int main() {
    prime(4);
    return 0;
}