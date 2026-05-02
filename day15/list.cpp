#include<bits/stdc++.h>
using namespace std;

void explainlist(){
    list <int> ls;
    ls.emplace_back(2);
    ls.push_back(1);

    ls.push_front(2);
    ls.emplace_front(9);

    //every other function is same as vector
    // vectors push functions are costlier than lists in terms of time complexity
}
int main(){
    explainlist();
}