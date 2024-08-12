// Create a vector of pair<int, string>. Push all elements onto a stack. Print the stack such that each pair is displayed with its integer and string values.

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int, string>> vec = {
        {1, "One"},
        {2, "Two"},
        {3, "Three"},
        {4, "Four"},
        {5, "Five"}
    };

    stack<pair<int, string>> st;

    for (auto it:vec) {
        st.push(it);
    }

    cout << "Stack elements (top to bottom):" << endl;
    while (!st.empty()) {
        cout << "(" << st.top().first << ", " << st.top().second << ")" << " ";
        st.pop();
    }

    return 0;
}
