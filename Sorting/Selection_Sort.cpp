#include<bits/stdc++.h>
using namespace std;
// void swapp(int &a,int &b)
// {
//     int temp = a;
//     a=b;
//     b=temp;
// }
int main()
{
    vector<int>arr={29,12,5,6,4,3,2,79};
    for(int i=0;i<arr.size();i++)
    {
        int min=i;
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
}