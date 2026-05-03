#include<bits/stdc++.h>
using namespace std;

void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back()+=5;
    cout<<q.back()<<" ";
    cout<<q.front()<<" ";
    q.pop();//pops 1
    cout<<q.front();
}

int main(){
    explainQueue();
    return 0;
}