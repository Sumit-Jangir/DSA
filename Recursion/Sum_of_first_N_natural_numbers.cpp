// Sum of first N natural numbers

#include <bits/stdc++.h>
using namespace std;
int sum(int num){
    if(num==0)
    return 0;

    return num + sum(num-1);
}
int main(){
    int num = 10;
    cout<<sum(num);
    return 0;
}