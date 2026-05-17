#include<bits/stdc++.h>
using namespace std;

void sum(int i, int n,int s = 0) {
    if(i > n) {
        cout<< s;
        return;
    }
    s = s+i;
    i++;
    sum(i,40,s);
}

int main() {
    sum(1,40);
    return 0;
}