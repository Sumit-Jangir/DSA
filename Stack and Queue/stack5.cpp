// Initialize a stack of integers and push 5 values onto it. Write a function to print the stack's size without removing any elements.

#include <bits/stdc++.h>
using namespace std;

void printStackSize(const stack<int> &st) {
    cout << "Size of the stack: " << st.size() << endl;
}

int main() {
    stack<int> st;  

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    printStackSize(st);

    return 0;
}
