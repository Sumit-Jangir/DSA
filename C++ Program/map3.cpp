//3 Given a list of words, write a program to group all anagrams together. Each group should contain words that, when rearranged, can form the same word

// words = ["listen", "silent", "enlist", "inlets", "rat", "tar", "art", "cat", "act", "tac"]

// output:

// [

//     ["listen", "silent", "enlist", "inlets"],

//     ["rat", "tar", "art"],

//     ["cat", "act", "tac"]

// ]

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string>arr = {"listen", "silent", "enlist", "inlets", "rat", "tar", "art", "cat", "act", "tac"};
    map<string,vector<string>>mp;

    for(auto it:arr){
        string word = it;
        sort(word.begin(),word.end());
        mp[word].push_back(it);
    }
    vector<vector<string>>ans;

    for(auto it:mp){
       ans.push_back(it.second);
   }

    for(auto it:mp){
      cout<<"[ ";
      for(auto i:it.second){
        cout<<i<<" ";
      }
        cout<<"]\n";
  }
    return 0;
}

