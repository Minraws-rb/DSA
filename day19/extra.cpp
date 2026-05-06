#include<bits/stdc++.h> 
using namespace std;

void explainExtras() {
    int num = 7;
    int cnt = __builtin_popcount(num);

    cout<<cnt<<" ";

    long long num2 = 103010103913431;
    int cnt2 = __builtin_popcount(num2);
    cout<<cnt2<<" ";

    int n;
    string s = "123";
    sort(s.begin(),s.end());
    do {
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
}
int main(){
    explainExtras();
}