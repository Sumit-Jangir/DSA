// Create a map of string keys and string values. Push all keys and values separately onto two stacks. Print all elements from both stacks.

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    map<string,string>mp;
    mp["name 1"] = "Sumit";
    mp["name 2"] = "Amit";
    mp["name 3"] = "Rohit";
    mp["name 4"] = "Mohit";
    mp["name 5"] = "Aman";

    stack<string>st1;
    stack<string>st2;

    for(auto it:mp){
        st1.push(it.first);
        st2.push(it.second);
    }

    while(!st1.empty()){
        cout<<st1.top()<<" "<<st2.top()<<endl;
        st1.pop();
        st2.pop();
    }
    return 0;
}