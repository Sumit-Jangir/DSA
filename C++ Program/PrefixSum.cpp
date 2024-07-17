#include<bits/stdc++.h>
using namespace std;
int getSubarraySum(vector<int>&prefixsum,int l,int r)
{
    if(l==0) return prefixsum[r];
    return prefixsum[r] - prefixsum[l-1];
}
vector<int> prefixsumalgo(vector<int>&arr)
{
    vector<int>prefixsum(arr.size());
    prefixsum[0]=arr[0];
    // prefixsum.push_back(arr[0]);
    for(int i=1;i<arr.size();i++)
    {
        prefixsum[i]=prefixsum[i-1]+arr[i];
    }
    return prefixsum;
}
int main()
{
    vector<int>arr={1,2,3,4,5,6,7,8,9};
    vector<int>prefixsum = prefixsumalgo(arr);
    for(auto it:prefixsum){
        cout<<it<<" ";
    }
    int l=3,r=6;
    int sum = getSubarraySum(prefixsum,l,r);
    cout<<"\n"<<"sum of "<<l<<" to "<<r<<" is "<<sum;
}