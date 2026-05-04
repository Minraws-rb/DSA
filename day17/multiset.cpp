#include<bits/stdc++.h>
using namespace std;

void explainMultiSet() {//ordered but not unique. it is sorted but in a tree form not linear
    multiset <int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(1);// will make two 1
    st.insert(3);
    st.insert(4);

    st.erase(1);// erases all occurances of 1

    int cnt = st.count(1);// since non unique element can exist, if give number exist it gives no of 1s 
    cout<<cnt<<" ";

    st.erase(st.find(1));// erases only one 1
    // to erase two occurances of 1 we can use it twice
    
}

int main(){
    explainMultiSet();
}