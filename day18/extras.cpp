#include<bits/stdc++.h>
using namespace std;

bool comp(const pair<int,int>& p1, const pair<int,int>& p2){
    if(p1.second == p2.second)
        return p1.first > p2.first;
    return p1.second < p2.second;
}

void explainExtra(){
    pair<int,int> p[] = {{2,2},{1,5},{2,1}};
    int n = 3;

    // default sort
    sort(p, p + n);

    cout << "Default sort:\n";
    for(int i = 0; i < n; i++){
        cout << p[i].first << " " << p[i].second << endl;
    }

    // custom sort
    sort(p, p + n, comp);

    cout << "\nCustom sort:\n";
    for(int i = 0; i < n; i++){
        cout << p[i].first << " " << p[i].second << endl;
    }
}

int main(){
    explainExtra();
}