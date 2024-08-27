#include <bits/stdc++.h>
using namespace std;
int main(){
    
    vector<int>arr = {23,45,64,6,3,13,45,4};
    cout<<endl;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size()-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
            
        }
    }
    cout<<"Sorted Array: ";
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}