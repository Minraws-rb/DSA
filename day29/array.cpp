#include<bits/stdc++.h>
using namespace std;

void insertion(int a[],int &n,int p,int v){
    for(int i = n; i > p; i--){
        a[i]= a[i-1];
    }
    a[p]= v;
     n++;
    for(int i = 0; i< n; i++) {
        cout<< a[i]<<" ";
    }
    cout<<endl;
}
void deletion(int a[], int &n, int p){
    for(int i = p+1; i<n; i++){
        a[i-1] = a[i];
    }
    n--;
    for(int i = 0; i< n; i++) {
        cout<< a[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int a[100], n, position, value;
    cin>> n;
    for(int i = 0; i< n; i++) {
        cin>> a[i];
        
    }
    insertion(a, n, 2, 3);
    deletion(a, n, 2);
    return 0;
}