// Given a map where keys are int and values are bool, push all values onto a stack. Pop the elements and print them, then count and print the number of true values.

#include <bits/stdc++.h>
using namespace std;

void printAndCount(stack<bool>&st){
    int count = 0;
    while(!st.empty()){

        cout<<st.top()<<" ";

        if(st.top()==true)
        count++;

        st.pop();

    }
    cout<<endl<<"Number of true values is "<<count;

}

int main(){
    
    map<int,bool>mp;
    mp[1] = true;
    mp[2] = true;
    mp[3] = false;
    mp[4] = true;
    mp[5] = false;

    stack<bool>st;
    for(auto it:mp){
        st.push(it.second);
    }
    printAndCount(st);

    return 0;
}