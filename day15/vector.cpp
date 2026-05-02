#include<bits/stdc++.h>
using namespace std;

void explainVector(){
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(4);

    vector <int> :: iterator it = v.begin();
    it++;
    cout<<*(it)<<endl;
    
    cout<<v[0]<<" "<<v.at(0);

    cout<<v.back()<<endl;

    for(vector<int>:: iterator it = v.begin(); it!=v.end();it++){
        cout<<*it<< endl;
    }// we dont use vector<int> :: iterator instead we do

    for (auto it = v.begin(); it!=v.end();it++){
        cout<<*it<<" ";// auto will automatically assigns to a vector iterator
    }  
    
    for (auto it : v) {
        cout << it << " ";
    }// this for each loops goes for each element one by one without me managing iterator

    v.erase(v.begin()+1); 
}

int main(){
    explainVector();
}