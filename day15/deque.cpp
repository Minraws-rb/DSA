#include<bits/stdc++.h>
using namespace std;

void explaindeque(){
    deque<int> dq;
    dq.push_back(4);
    dq.emplace_back(3);
    dq.push_front(2);
    dq.emplace_front(7);

    dq.pop_back();
    dq.pop_front();

    dq.back();
    dq.front();
    //rest functions are same as vectors
    // begin, end, rbegin, rend, clear, insert, size, swap
}

int main(){
    explaindeque();
}