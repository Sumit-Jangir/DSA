// Sorting Fruits
// A vendor has a cart filled with apples, oranges, and bananas, all in random order. He needs to arrange them by weight to prevent damage during transport. Without comparing all the fruits individually, what strategy can the vendor use to sort them effectively?

#include <bits/stdc++.h>
using namespace std;
int occuranceis(vector<int> &arr){
    map<int,int> mp;
    for(auto it:arr){
        mp[it]++;
    }
    int maxi = INT_MIN;
    int frt=0;
    for(auto it:mp){
        if(it.second>maxi){
            maxi=it.second;
            frt=it.first;
        }
    }
    return frt;
    
}
int main()
{
   vector<int> arr  =  {30,10,23,10,34,50,30,10,34,30,34,30};
   
    int frt = occuranceis(arr);
    cout<<frt; 
  
    return 0;
}
