// Push the numbers from 1 to 10 onto a stack. Write a function to remove all odd numbers from the stack and print the remaining even numbers.

#include <bits/stdc++.h>
using namespace std;
void removeOdd(stack<int>st){
    while(!st.empty()){
        if((st.top())%2==1){
            st.pop();
        }
        else{
            cout<<st.top()<<" ";
            st.pop();
        }
    }
}
int main(){
    stack<int>st;
    for(int i=1;i<=10;i++){
        st.push(i);
    }
    removeOdd(st);
    return 0;
}