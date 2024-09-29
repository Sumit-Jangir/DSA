// 6 Given an array of integers and a threshold value, write a function that finds and returns all elements whose frequency is above the given threshold.
#include <bits/stdc++.h>
using namespace std;

vector<int> elementsAboveThreshold(vector<int>& arr, int threshold) {
    map<int, int> frequencyMap;

    // Count frequencies of each element
    for (int num : arr) {
        frequencyMap[num]++;
    }

    // Find elements with frequency above the threshold
    vector<int> result;
    for (auto entry : frequencyMap) {
        if (entry.second > threshold) {
            result.push_back(entry.first);
        }
    }

    return result;
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int threshold = 2;

    vector<int> filteredElements = elementsAboveThreshold(arr, threshold);

    cout << "Elements with frequency above " << threshold << ": ";
    for (int num : filteredElements) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
