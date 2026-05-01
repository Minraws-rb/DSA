#include<bits/stdc++.h>
using namespace std;

void explainVector(){
    vector <int> v;
    v.push_back(2);
    v.emplace_back(3);
    cout<< v[0];

    vector <pair<int,int>> vec;
    vec.push_back({2,3}); //this needs curly brackets
    vec.emplace_back(4,5);//this doesnt need curly brackets

    vector <int,int> v1(5,100);
    cout<<|v1[0];
}

int main(){
    explainVector();
}