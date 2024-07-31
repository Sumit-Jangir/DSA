#include <bits/stdc++.h>
using namespace std;
vector<int> number(vector<int>& nums) {
    int n = nums.size();
    
    for (int i = 0; i < n; ++i) {
        int index = abs(nums[i]) - 1; 
        if (nums[index] > 0) {
            nums[index] = -nums[index]; 
        }
    }

    vector<int> result;
    for (int i = 0; i < n; ++i) {
        if (nums[i] > 0) {
            result.push_back(i + 1);  
        }
    }
    
    return result;
}

int main() {
    vector<int> nums1 = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> result1 = number(nums1);
    
    for (int num : result1) {
        cout << num << " ";
    }

    return 0;
}