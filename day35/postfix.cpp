#include<bits/stdc++.h>
using namespace std;

int precedence(char s) {
    if( s =='^') return 3;
    else if(s =='/' || s == '*'|| s =='%') return 2;
    else if(s == '+' || s == '-') return 1;
    return 0;
}

string infixtopostfix(string infix){
    stack <int> st;
    string postfix;
    int i, j;
    for(i = 0; i < infix.size(); i++) {
        if(isalnum(infix[i])){
            postfix += infix[i];
        }
        else if(infix[i] == '('){
            st.push(infix[i]);
        }
        else if(infix[i] == ')'){
            while(!st.empty() && st.top() != '('){
                postfix += st.top();
                st.pop();
            }
            st.pop();
        }
        else { //operator
            while(!st.empty() && precedence(st.top()) >= precedence(infix[i])){
                postfix += st.top();
                st.pop();
            }
            st.push(infix[i]);
        }
    }

    while(!st.empty()) {
        postfix += st.top();
        st.pop();
    }
    return postfix;
}

int main() {
    string infix;
    cout<<"Enter an expression";
    cin>>infix;
    cout<<"Postfix is:"<<infixtopostfix(infix)<<endl;
    return 0;
}