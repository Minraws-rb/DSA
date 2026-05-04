#include<bits/stdc++.h>
using namespace std;

void explainMap() {
    map <int,int> mpp;
    map <int,pair<int,int>> mpp2;// pair value for a key
    map <pair<int,int>,int> mpp3;// pair key for a value
    mpp[1]=2;//maps {1,2}
    mpp.emplace(make_pair(2,3));
    mpp.insert({4,5});

    for(auto it : mpp){// for eachloop
        cout<<it.first<<" "<<it.second<<endl;// prints all the keys and values first is key and second is value
     }
    cout<<mpp[1]; // prints 2

    auto it = mpp.find(1);
    cout<<it->first<<" "; // prints {1,2}
    cout<<it->second;

    auto it = mpp.upper_bound(2);// same as set uses key for bounding
    auto it = mpp.lower_bound(3);
}

int main(){
    explainMap();
}