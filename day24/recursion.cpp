#include<bits/stdc++.h>
using namespace std;

void recursion(int i) {
    if(i==4) {
     return;
    }
    cout<< i<<" ";
    i++;
    recursion(i);
    
}

int main() {
    recursion(1);
    return 0;

}