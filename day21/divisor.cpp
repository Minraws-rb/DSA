#include<iostream>
using namespace std;

void divisor(int n) {
    int r,a[1000] = {0};
    int i;
    for(i = 1; i <= n; i++){
        if(n%i==0) {
            a[i] = i;
        }
    }
    for(i = 1; i<= n; i++) {
        if(a[i]!=0) {
            cout<< a[i]<<" ";
        }
    }
}

int main() {
    divisor(70);
    return 0;
}