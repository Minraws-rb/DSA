#include<bits/stdc++.h>
using namespace std;

void rev(vector <int> &a, int i, int n) {
    if( i< n){
        swap(a[i],a[n]);
        i++;
        n--;
        rev(a, i, n);
    }
    else return;
}

int main() {
    vector<int> a={1,2,3,4,5};
    rev(a, 0, a.size()-1);
    for(auto &it : a) {
        cout<< it;
    }
}