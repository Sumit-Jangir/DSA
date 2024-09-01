// Sorting Marbles
// A toy manufacturer has bags filled with marbles of varying sizes. To ensure quality, they need to arrange the marbles in each bag by size, from smallest to largest. What's the most efficient way to sort the marbles in the least number of comparisons?

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& marbles) {
    int n = marbles.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (marbles[j] > marbles[j + 1]) {
                swap(marbles[j], marbles[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> marbles = {5, 1, 4, 2, 8, 7, 6, 3};  

    bubbleSort(marbles); 
    cout << "Sorted marbles by size: ";
    for (int i = 0; i < marbles.size(); i++) {
        cout << marbles[i] << " ";
    }
    cout << endl;

    return 0;
}
