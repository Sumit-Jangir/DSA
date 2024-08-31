// LCM_of_two_number

#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b, int gcdValue) {
    return (a * b) / gcdValue;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int gcdValue = gcd(num1, num2);
    int result = lcm(num1, num2, gcdValue);
    
    cout << "LCM of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
    
}