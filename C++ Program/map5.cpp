// 5. Write a function that takes an array of integers as input and returns the element that appears most frequently in the array. In the case of a tie, the function should return any of the most frequent elements.

#include <bits/stdc++.h>
using namespace std;

int occuranceis(vector<int>&arr){

    map<int,int>mp;
    for(auto it:arr){
        mp[it]++;
    }
    int max = INT_MIN;
    int freq = 0;
    for(auto it:mp){
        if(max<it.second){
            max = it.second;
            freq = it.first;
        }
    }
    return freq;
}
int main(){
    
    vector<int>arr = {30,10,23,10,34,50,30,10,34,34,30};

    int frq = occuranceis(arr);

    cout<<frq;
    return 0;
}