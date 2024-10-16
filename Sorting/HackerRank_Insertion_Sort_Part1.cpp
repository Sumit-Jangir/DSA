#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
        }
    cout << endl;
}
void insertionSort1(vector<int> arr) {
    int last = arr[arr.size()-1];
    for(int i = arr.size() - 1; i >= 0; i--){
        if(last < arr[i-1]) {
            arr[i] = arr[i-1];
            printArr(arr);
        }
        else{
            arr[i] = last;
            printArr(arr);
            break;
        }
    }
}

int main(){
    vector<int>arr = {2, 4, 6, 8, 3};
    insertionSort1(arr);
    return 0;
}