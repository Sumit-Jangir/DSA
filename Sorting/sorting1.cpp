// 1. Missing Coins
// A treasure chest contains 10 piles of coins, each with a different number of coins. Captain Ron needs to find out which pile has the least coins, but the piles are scattered. Can you help him figure out how to sort them in the least number of moves?

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> piles = {23, 45, 64, 6, 3, 13, 45, 4, 28, 11};

    for (int i = 0; i < piles.size() - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < piles.size(); j++) {
            if (piles[j] < piles[minIndex]) {
                minIndex = j;
            }
        }
        swap(piles[i], piles[minIndex]);
    }

    cout << "Pile with the least coins has: " << piles[0] << " coins." << endl;

    cout << "Sorted piles: ";
    for (int pile : piles) {
        cout << pile << " ";
    }
    cout << endl;

    return 0;
}