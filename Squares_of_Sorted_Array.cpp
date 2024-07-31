#include<bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>nums) {
    int n = nums.size();
    vector<int> result(n);
    int left = 0, right = n - 1;
    int position = n - 1;

    while (left <= right) {
        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];

        if (leftSquare > rightSquare) {
            result[position] = leftSquare;
            left++;
        } else {
            result[position] = rightSquare;
            right--;
        }

        position--;
    }

    return result;
}

int main() {
    vector<int> nums1 = {-4, -1, 0, 3, 10};
    vector<int> result1 = sortedSquares(nums1);

    for (int num : result1) {
        cout << num << " ";
    }
    cout<<endl;
    vector<int> nums2 = {-7, -3, 2, 3, 11};
    vector<int> result2 = sortedSquares(nums2);

    for (int num : result2) {
        cout << num << " ";
    }

    return 0;
}
