#include<bits/stdc++.h>
using namespace std;

void f(int i , int n) {
    if(i>n) return;
    cout<<i<<endl;
    f(i+1, n);
}

int main() {
    f(1,5);
    return 0;
}