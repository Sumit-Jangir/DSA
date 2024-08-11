// Write a program that uses a stack to check if a given string (containing parentheses) has balanced parentheses.

#include <bits/stdc++.h>
using namespace std;

bool isBalance(string s){
    stack<char>st;
    for(auto it:s){

    if(it == '(' || it == '[' || it == '{')
    st.push(it);

    else if(st.empty() ||
        (it == ')' && st.top() != '(' ) ||
        (it == ']' && st.top() != '[' ) ||
        (it == '}' && st.top() != '{' ))
        return false;
    else
     st.pop();

    }

    return st.empty();

}

int main(){
    string s = "{{([{}])}}";

    cout<<isBalance(s);


    return 0;
}