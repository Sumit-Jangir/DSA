// Fibonacci sequence up to N terms

#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n==0 || n==1)
    return n;
    else
    return fib(n-1)+fib(n-2);
}
int main(){
    
    int n = 9;
    cout<<fib(n);
    return 0;
}