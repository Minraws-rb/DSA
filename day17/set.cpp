#include<bits/stdc++.h>
using namespace std;

void explainSet() {//ordered and unique. it is sorted but in a tree form not linear
    set <int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(1);// wont make two 1
    st.insert(3);
    st.insert(4);

    auto it = st.find(1);// returns an iterator pointing to element 1
    cout<<*it<<" ";
    auto it2 = st.find(6); // there exist no 6 in the set so it will return st.end()
    // cout<<*it2<<" ";

    int cnt = st.count(1);// since unique element can exist, if give number exist it gives 1 else 0
    cout<<cnt<<" ";

    auto it6 = st.find(3);
    st.erase(it6);// erases the element using iterator

    auto it1 = st.find(2);
    auto it5 = st.find(4);
    st.erase(it1, it5);

    auto it3 = st.lower_bound(2);
    auto it4 = st.upper_bound(3);
}

int main(){
    explainSet();
}