#include<bits/stdc++.h>
using namespace std;

void f(int i) {
    if(i<1) return;
    f(i-1);//the last function call is completely executed first then the cout of 2nd last and so on which gives the linear 1 - n.
    cout<<i<<endl;//backtracking
}

int main() {
    f(5);
    return 0;
}