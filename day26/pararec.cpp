#include<bits/stdc++.h>
using namespace std;

void sum(int i, int s) {
    if(i == 0) {
        cout<< s;
        return;
    }
    sum(i-1,s+i);
}

int main() {
    sum(40, 0);
    return 0;
}