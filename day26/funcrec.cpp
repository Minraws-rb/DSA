#include<bits/stdc++.h>
using namespace std;

int sum(int i) {
    if(i==0){
        return 0;
    }
    else 
    return i + sum(i-1);
}

int main() {
    cout<<sum(40);
    return 0;
}