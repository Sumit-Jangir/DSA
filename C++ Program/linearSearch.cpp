#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int> arr, int target) {
    for (auto it:arr) {
        if (it == target) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target;

    cout << "Enter the element to search: ";
    cin >> target;

    if (linearSearch(arr, target)) {
        cout << "Element " << target << " found in the array.\n";
    } else {
        cout << "Element " << target << " not found in the array.\n";
    }

    return 0;
}
