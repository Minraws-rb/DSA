#include<bits/stdc++.h>
using namespace std;

void f(int i) {
    if(i<1) return;
    cout<<i<<endl;
    f(i-1);
}

int main() {
    f(5);
    return 0;
}