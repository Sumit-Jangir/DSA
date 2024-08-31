// Print_an_array_in_reverse

#include <bits/stdc++.h>
using namespace std;

void printArrayInReverse(vector<int>arr,int end) {
    int start = 0;
    if (start > end)
        return;

    cout << arr[end] << " ";

    printArrayInReverse(arr , end-1);
}

int main() {
    vector<int>arr = {1,2,3,4,5,6};
    int end = arr.size()-1;
    cout << "Array in reverse order: ";
    printArrayInReverse(arr,end);
    
    return 0;
}
