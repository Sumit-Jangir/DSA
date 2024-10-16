#include <bits/stdc++.h>
using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar) {
    int count = 0;
    
  for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((ar[i]+ar[j])%k==0)
                count++;
        }
    }
    return count;
}

int main(){
    vector<int>arr = {1, 3, 2, 6, 1, 2};
    int n = arr.size();
    int k = 3;
    cout<<divisibleSumPairs(n,k,arr);
    return 0;
}