#include<iostream>
using namespace std;

void count(int n) {
    int r, c = 0;
    while(n!=0) {
        n = n/10;
        c++;
    }
    cout<<n<<":"<<c;
}

int main(){
    count(29903183);
    return 0;
}