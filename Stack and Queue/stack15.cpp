// Given a map with string keys and double values, push all keys onto a stack and then pop and print each key, appending a count of how many times each key appears in the map.

#include <bits/stdc++.h>
using namespace std;

int main() {

    map<string, double> mp;
    vector<pair<string, double>> entries = {
        {"apple", 2.5},
        {"banana", 3.7},
        {"orange", 4.0},
        {"apple", 2.8},
        {"banana", 3.9},
        {"grape", 1.9}
    };

    unordered_map<string, int> key_count;
    for (const auto& entry : entries) {
        mp[entry.first] = entry.second; 
        key_count[entry.first]++;    
    }

    stack<string> st;
    for (const auto& it : mp) {
        st.push(it.first);
    }

    while (!st.empty()) {
        string key = st.top();
        st.pop();
        cout << key << " (" << key_count[key] << ")" << endl;
    }

    return 0;
}
