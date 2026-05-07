#include<iostream>
using namespace std;

void armstrong(int n) {
    int r, num = n, anum = 0,c = 0,count , m = 1;

     while(n!=0) {
        n = n/10;
        c++;
    } 
    count = c;
    cout<<"Count = "<< c<<endl;// usedfor debugging
    n = num;
    while ( n!= 0){
        r = n%10;
        while(c > 0) {
            m = m *r;
            c--;
        }
        cout<< m<< endl;// was used for debugging
        c = count;
        anum = anum + m;
        n = n/10;
        m=1;
    }
    cout<< anum<<" ";

    if(anum == num) {
        cout<<"Armstrong";
    }
    else {
        cout<<"Not armstrong";
    }
    
}

int main() {
    armstrong(1634);
    return 0;
}