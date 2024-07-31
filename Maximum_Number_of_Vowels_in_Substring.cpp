#include <bits/stdc++.h>
using namespace std;
int maxVowels(const string &s, int k)
{
    unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u'};

    int maxVowelCount = 0;
    int currentVowelCount = 0;

    for (int i = 0; i < k; i++)
    {
        if (vowels.count(s[i]))
        {
            currentVowelCount++;
        }
    }

    maxVowelCount = currentVowelCount;

    for (int i = k; i < s.length(); i++)
    {

        if (vowels.count(s[i - k]))
        {
            currentVowelCount--;
        }

        if (vowels.count(s[i]))
        {
            currentVowelCount++;
        }

        maxVowelCount = max(maxVowelCount, currentVowelCount);
    }

    return maxVowelCount;
}

int main()
{
    string s1 = "abciiidef";
    int k1 = 4;
    cout << maxVowels(s1, k1) << endl;

    string s2 = "aeiou";
    int k2 = 2;
    cout << maxVowels(s2, k2) << endl;

    string s3 = "leetcode";
    int k3 = 3;
    cout << maxVowels(s3, k3) << endl;

    return 0;
}