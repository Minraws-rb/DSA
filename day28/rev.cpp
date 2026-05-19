#include<bits/stdc++.h>
using namespace std;

void reversi(int a [], int n,int on, int i =0){
   if( i >= n-1) {
        for( int j = 0; j<on ; j++){
            cout<< a[j]<<" ";
        }
        return;
    }
        swap(a[i], a[n-1]);
        
    reversi(a, n-1, on, i+1);
}

int main() {
    int a[100], n;
    cin>>n;
    for(int i = 0; i<n ; i++) {
        cin>>a[i];
    }
    reversi(a, n, n);
    return 0;
}