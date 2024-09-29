#include <bits/stdc++.h>
using namespace std;
void reverseArr(vector<int>arr){
    for(int i=arr.size()-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}

void sumOfArr(vector<int>arr){
    int sum;
    for(auto it:arr){
        sum += it;
    }
    cout<<"Sum of Array: "<<sum;
}

void AvgOfArr(vector<int>arr){
    float sum=0;
    for(auto it:arr){
        sum += it;
    }
    float a = sum/arr.size();
    cout<<"Average: "<<a;
}

int main(){
    vector<int>arr = {1,2,3,4,5,6,7,8,9,10};
    reverseArr(arr);
    cout<<"\n";
    sumOfArr(arr);
    cout<<"\n";
    AvgOfArr(arr);
    return 0;
}