#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int> arr, int target) {
    for (int i = arr.size()-1; i >= 0; i--) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; 
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 3, 7, 8, 9, 10, 3};
    int target;

    cout << "Enter the element to find its last occurrence: ";
    cin >> target;

    int index = firstOccurrence(arr, target);
    if (index != -1) {
        cout << "Element " << target << " found at index " << index<<"\n";
    } else {
        cout << "Element " << target << " not found in the array." << "\n";
    }

    return 0;
}
