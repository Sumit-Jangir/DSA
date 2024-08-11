// Push 10 integers onto a stack. Then, write a function to reverse the stack using another stack. Print the reversed stack.

#include <bits/stdc++.h>
using namespace std;

void reverseStack(stack<int>s){
    stack<int>reverseSt;
    while(!s.empty()){
    reverseSt.push(s.top());
        s.pop();
    }
    while(!reverseSt.empty()){
        cout<<reverseSt.top()<<" ";
        reverseSt.pop();
    }
}
int main(){

    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    st.push(10);

    reverseStack(st);
    return 0;
}