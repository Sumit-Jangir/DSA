// Sum_of_digits_of_a_number

#include <bits/stdc++.h>
using namespace std;
int sumOfDigits(int n) {
    if (n == 0)
        return 0;

    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = sumOfDigits(number);
    cout << "Sum of digits: " << result << endl;

    return 0;
}