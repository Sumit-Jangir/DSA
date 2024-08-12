// Create a stack of characters. Push the characters of a given string onto the stack. Write a function to check if the string is a palindrome using the stack.

#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string &s){
     stack<char>st;
     string newString;
    for(int i=0;i<s.size();i++){
        st.push(s[i]);
    }
    while (!st.empty())
    {
        newString.push_back(st.top());
        st.pop();
    }
   
   return s == newString;
    
    
}
int main(){
   
    string s;
    cout<<"Enter string: ";
    cin>>s;
    
    if(isPalindrome(s)){
        cout<<"Palindrome";
    }
    else
        cout<<"Not Palindrome";
    return 0;
}