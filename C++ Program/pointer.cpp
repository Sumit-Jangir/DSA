#include <bits/stdc++.h>
using namespace std;

void calculateTex(int &income){
    float tax = 0.10;
    income = income-income*tax;
}
void watchVideo(int *views){
    (*views)++;
}
int main(){
    // int x = 10;
    // int y=14;
    // cout<<x<<endl;
    // cout<<&x<<endl;
    // cout<<y<<endl;
    // cout<<&y<<endl;

    // int x=2;
    // int &y = x;
    // x++;
    // cout<<x<<endl;
    // cout<<y<<endl;

    // int income;
    // cout<<"Enter income: "<<endl;
    // cin>>income;

    // calculateTex(income);
    // cout<<income;

    int views=100;
    watchVideo(&views);
    cout<<views<<endl;


    return 0;
}