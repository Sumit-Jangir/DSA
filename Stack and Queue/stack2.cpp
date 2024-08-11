// Write a program that reads 5 integers from the user, pushes them onto a stack, and then prints the stack in LIFO (Last In First Out) order.

#include <bits/stdc++.h>
using namespace std;
int main(){

    stack<int>st;
    int input;
    for (int i = 1; i < 6; i++){
    cout<<"Enter 5 number to push in stack: ";
        cin>>input;
        st.push(input);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}