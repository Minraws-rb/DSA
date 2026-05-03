#include<bits/stdc++.h>
using namespace std;

void explainPriorityQueue(){
    priority_queue<int> pq;// makes max heap
    pq.push(1);
    pq.push(2);
    pq.emplace(4);

    cout<<pq.top();
    pq.pop();//pops 1

    priority_queue<int, vector<int> , greater<int>> pq2;// it makes Min heap
    pq2.push(1);
    pq2.push(2);
    pq2.emplace(4);

    cout<<pq2.top();

}

int main(){
    explainPriorityQueue();
    return 0;
}