// 1 Given the following array: [35, 45, 70, 80, 90, 28, 66, 49, 53, 52, 57, 78], convert it into a map where:

// Values greater than 65 are categorized as "Obesity."

// Values between 45 and 65 (inclusive) are categorized as "Healthy."

// Values less than 45 are categorized as "Ricket."

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {35, 45, 70, 80, 90, 28, 66, 49, 53, 52, 57, 78};
    unordered_map<string, vector<int>> mp;
    for (auto it : arr)
    {
        if (it > 65)
        {
            mp["Obesity"].push_back(it);
        }
        if (it >= 45 && it <= 65)
        {
            mp["Healthy"].push_back(it);
        }
        if (it < 45)
        {
            mp["Ricket"].push_back(it);
        }
    }

    for (auto it : mp)
    {
        cout << it.first << ": ";
        for (auto i : it.second)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}