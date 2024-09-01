// 3. Class Rankings
// A group of 15 students received their final exam scores. To prepare for the class awards, the teacher wants to determine who had the lowest score without reviewing every student's grade one by one. What process can the teacher follow to identify the weakest performer efficiently?

#include <bits/stdc++.h>
using namespace std;
int main()
{

    // vector<int>arr ={34,56,76,88,90,100,66,78,45,23,55};

    // for(int i=0;i<arr.size();i++){
    //     for(int j=0;j<arr.size()-1-i;j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }

    vector<pair<string, int>> arr = {
        {"Alice", 88}, {"Bob", 72}, {"Charlie", 95}, {"David", 65}, {"Eva", 91}, {"Frank", 74}, {"Grace", 85}, {"Hannah", 78}, {"Ivy", 67}, {"Jack", 84}, {"Karen", 92}, {"Leo", 68}, {"Mia", 70}, {"Nathan", 45}, {"Olivia", 39}};


    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size()-1-i;j++){
            if(arr[j].second>arr[j+1].second){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(auto it:arr){
        cout<<it.first<<" "<<it.second<<endl;
    }


    return 0;
}