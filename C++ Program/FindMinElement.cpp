#include <bits/stdc++.h>
using namespace std;

int minElement(vector<int> arr)
{
    int min = INT_MAX;
    int element;
    cout << "Enter Array Elements:\nHow many element in Array:";
    cin >> element;

    arr.resize(element);
    for (int i = 0; i < element; i++)
    {
        cout << "Enter arr[" << i << "]:-";
        cin >> arr[i];
    }
        for (auto it : arr)
        {
            if (it < min)
            {
                min = it;
            }
        }
    return min;
}
int main()
{
    vector<int> arr;
    cout << minElement(arr);
    return 0;
}