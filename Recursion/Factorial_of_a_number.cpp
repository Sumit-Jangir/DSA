#include <bits/stdc++.h>
using namespace std;
int fact(int num){
    if(num == 0)
    return 1;

    return num*fact(num-1);
}
int main(){
    
    int num = 5;
    cout<<fact(num);
    return 0;
}