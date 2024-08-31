// cube_of_a_number_using_recursion


#include <bits/stdc++.h>
using namespace std;

int cube(int n, int count = 3) {
    if (count == 1)
        return n;

    return n * cube(n, count - 1);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = cube(number);
    cout << "The cube of " << number << " is: " << result << endl;

    return 0;
}