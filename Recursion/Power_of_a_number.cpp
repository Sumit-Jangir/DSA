// Power of a number (m^n)

#include <bits/stdc++.h>
using namespace std;

int power(int m,int n){
    if(n==0){
       return 1;
    }

    return m*power(m,n-1);
}

int main(){
    int m =3;
    int n = 2;
    cout<<power(m,n);    
    return 0;
}