#include<iostream>
using namespace std;

void reverse(int n) {
    int r, rev = 0;
    while(n != 0) {
        r = n%10;
        rev = rev*10 + r;
        n = n/10;
    }
    cout<<rev<<" ";
}

int main() {
    reverse(2034);
    return 0;
}