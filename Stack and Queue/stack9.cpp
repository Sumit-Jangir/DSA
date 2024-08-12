// Create a map where keys are integers and values are strings. Push all the values of the map onto a stack and print the stack

#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>mp;
    stack<string>st;
    mp[1] = "apple";
    mp[2] = "cherry";
    mp[3] = "mango";
    mp[4] = "orange";

    for(auto it:mp){
        st.push(it.second);
        cout<<it.first<<" "<<it.second<<endl;
    }
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
    return 0;
}