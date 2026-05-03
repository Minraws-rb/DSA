#include<bits/stdc++.h>
using namespace std;

void explainStack(){
    stack <int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    cout<<st.top()<<" ";
    st.pop();

    cout<<st.top()<<" ";

    cout<<st.empty()<<" ";
    
    cout<<st.size()<<" ";

    stack <int> st1, st2;
    st.swap(st2);

    cout<<st2.top();
}

int main(){
    explainStack();
    return 0;
}