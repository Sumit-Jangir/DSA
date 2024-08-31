// Find the maximum element in an array


#include <bits/stdc++.h>
using namespace std;
int findMax(vector<int>arr, int n) {
    if (n == 1)
        return arr[0];

    return max(arr[n - 1], findMax(arr, n - 1));
}

int main() {
    vector<int>arr = {3, 5, 7, 2, 8, 6};
    int n = arr.size()-1;

    int maxElement = findMax(arr, n);

    cout << "The maximum element in the array is: " << maxElement << endl;

    return 0;
}