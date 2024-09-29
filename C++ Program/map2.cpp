// 2. vector [12,21,32,23,56,65,76,67] 

    //  [[12,21],[32,23],[65,56]]  group them like this using map 

#include <bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> arr= {12,21,32,23,56,65,76,67};
   
   map<int,vector<int>> mp;
   
   for(int i=0; i<arr.size();i+=2){
        mp[i/2].push_back(arr[i]);
        mp[i/2].push_back(arr[i+1]);
   }
   
  for(auto it:mp){
      cout<<"[ ";
      for(auto i:it.second){
        cout<<i<<" ";
      }
        cout<<"],";
  }
    return 0;
}
