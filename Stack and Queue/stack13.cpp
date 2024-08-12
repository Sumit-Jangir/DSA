// Initialize a map with int keys and float values. Push all keys and values into a stack as pairs. Print all pairs in LIFO order.

#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,float>mp;
    mp[1] = 1.4;
    mp[2] = 4.4;
    mp[3] = 5.4;
    mp[4] = 16.4;
    mp[5] = 12.4;

    stack<pair<int,float>>st;
    for(auto it:mp){
        st.push(it);
    }
    while(!st.empty()){
        pair<int,float>p = st.top();
        cout<<"("<<p.first<<" , "<<p.second<<")"<<endl;
        st.pop();
    }
    return 0;
}
