#include<bits/stdc++.h>
using namespace std;

void explainMap() {
    map <int,int> mpp;
    map <int,pair<int,int>> mpp2;// pair value for a key
    map <pair<int,int>,int> mpp3;// pair key for a value
    mpp[1]=2;//maps {1,2}
    mpp.emplace(make_pair(2,3));
    mpp.insert({4,5});

    

}

int main(){
    explainMap();
}