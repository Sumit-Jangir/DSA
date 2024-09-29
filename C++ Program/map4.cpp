// .Given an array of integers, write a function that creates and returns a frequency array (or dictionary) that counts the occurrences of each integer in the array.

#include <bits/stdc++.h>
using namespace std;
map<int,int> occuranceis(vector<int> &arr){
    map<int,int> mp;
    for(auto it:arr){
        mp[it]++;
    }
    return mp;
    
}
int main()
{
   vector<int> arr  =  {30,10,23,10,34,50,30,10,34};
   
   map<int,int> mp = occuranceis(arr);
   
   for(auto it:mp){
       cout<<it.first<<": "<<it.second<<" \n";
   }
    return 0;
}