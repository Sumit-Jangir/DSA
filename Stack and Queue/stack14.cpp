// Create a map of string keys and int values. Push all values onto a stack, then pop elements until you find the first even number and print it.

#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>mp;
    mp["a"] = 5;
    mp["b"] = 30;
    mp["c"] = 48;
    mp["d"] = 45;
    mp["e"] = 47;

    stack<int>st;
    for(auto it:mp){
        st.push(it.second);
        //  cout<<it.first<<" "<<it.second<<endl;
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        if(st.top()%2==0){
            break;
        }

        st.pop();
    }
    return 0;
}