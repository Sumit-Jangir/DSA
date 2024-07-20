#include <bits/stdc++.h>
using namespace std;

int maxElement(vector<int>arr){
    int max = INT_MIN;
    for(auto it:arr){
        if(it>max){
            max = it;
        }
    }
    return max;
}
int main(){
    vector<int>arr = {23,4,5,63,23,12,14};
    cout<<maxElement(arr);
    return 0;
}