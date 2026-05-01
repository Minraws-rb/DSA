#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int,int> p = {1,3};
    cout<<p.first<<p.second;

    pair<int,pair<int,int>> x = {1,{2,3}};
    cout<<x.first<<" "<<x.second.first<<" "<<x.second.second;

    pair <int,int> arr[]= {{1,2},{2,3},{3,4}};
    cout<<arr[1].second;

}

int main(){
    explainPair();
}