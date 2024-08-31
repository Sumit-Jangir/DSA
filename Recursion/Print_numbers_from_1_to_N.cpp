// Print_numbers_from_1_to_N
#include <bits/stdc++.h>
using namespace std;
int print(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        print(n - 1);
        cout << n << " ";
        return 0;
    }
}

int main()
{
    int n = 20;
    print(n);
    return 0;
}