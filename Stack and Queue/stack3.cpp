// Implement a function that takes a stack of integers and returns the sum of all elements in the stack without modifying the stack.


#include <bits/stdc++.h>
using namespace std;

int sumOfStack(stack<int>s){
    int sum = 0;
    while(!s.empty()){
        sum += s.top();
        s.pop();
    }
    return sum;
}
int main(){
    
    stack<int>st;
    st.push(2);
    st.push(3);
    st.push(5);
    st.push(27);

    cout<<"sum of stack element is "<<sumOfStack(st);
    return 0;
}