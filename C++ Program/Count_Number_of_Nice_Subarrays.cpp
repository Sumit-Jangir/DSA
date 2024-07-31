#include<bits/stdc++.h>
using namespace std;

int subarrays(vector<int> nums, int k) {
    unordered_map<int, int> prefixCount;
    prefixCount[0] = 1; 
    int currentOddCount = 0;
    int result = 0;

    for (auto it:nums) {
        
        if (it % 2 != 0) {
            currentOddCount++;
        }
        if (prefixCount.find(currentOddCount - k) != prefixCount.end()) {
            result += prefixCount[currentOddCount - k];
        }

        prefixCount[currentOddCount]++;
    }

    return result;
}

int main() {
    vector<int> nums1 = {1, 1, 2, 1, 1};
    int k1 = 3;
    cout<<subarrays(nums1, k1) <<endl; 

    vector<int> nums2 = {2, 4, 6};
    int k2 = 1;
    cout<<subarrays(nums2, k2) <<endl; 

    vector<int> nums3 = {2, 2, 2, 1, 2, 2, 1, 2, 2, 2};
    int k3 = 2;
    cout<<subarrays(nums3, k3) <<endl; 

    return 0;
}