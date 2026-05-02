#include<bits/stdc++.h>
using namespace std;

void explainvectors(){
    int a;
    vector<int> v = {1,2,3};

    for(auto it : v){
        cout<< it<<" ";
    }
    cout<<endl;
    v.erase(v.begin()); 
    v.insert(v.begin(),10);

    for(auto it : v){
        cout<< it<<" ";
    }
    cout<<endl;

    vector <int> v2= {9,2,7,1,8,6,4,5,3};
    for(auto it : v2){
        cout<<it<<" ";
    }
    cout<<endl;

    v2.erase(v2.begin()+1, v2.begin()+4);// it goes from +1<= e < +4
    //start is included but not end
    v2.insert(v2.begin()+1,3, 0);
    for(auto it : v2){
        cout<<it<<" ";
    }
    cout<<endl;

    vector <int> copy(2,10);
    v.insert(v.begin(),copy.begin(),copy.end());
    for(auto it : v){
        cout<< it<<" ";
    }
    cout<<endl;

    cout<<v.size()<<" ";// gives how many elements are there in vector
    v.pop_back();// pops last element
    v2.swap(v);// swaps vector
    v.clear();
    cout<<v.empty();// gives 1 if vector is empty else 0

    


}

int main(){
    explainvectors();
}