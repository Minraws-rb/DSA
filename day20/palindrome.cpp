#include<iostream>
using namespace std;

void reverse(int n) {
    int r, rev = 0, num = n;
    while(n != 0) {
        r = n%10;
        rev = rev*10 + r;
        n = n/10;
    }
    cout<< rev<<"  "<< num<< endl;
    if(num == rev){
        cout<<"palindrome"<<" "; 
    }
    else {
        cout<<"not palindrome";
    }
    
}

int main() {
    reverse(43034);
    return 0;
}