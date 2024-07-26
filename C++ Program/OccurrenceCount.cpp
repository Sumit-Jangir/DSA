#include <bits/stdc++.h>
using namespace std;

int countOccurrences(vector<int> arr, int target) {
    int count = 0; 
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            count++; 
        }
    }
    return count; 
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 3, 5, 3, 7, 8, 9, 10};
    int target;

    cout << "Enter the element to count its occurrences: ";
    cin >> target;

    int count = countOccurrences(arr, target);
    cout << "Element " << target << " occurs " << count << " times in the array." << endl;

    return 0;
}
