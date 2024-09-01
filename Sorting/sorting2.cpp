// 2. Restaurant Orders
// A restaurant receives customer orders at different times, but the kitchen can only prepare one dish at a time. To keep customers happy, the chef wants to arrange orders by preparation time. How can the chef minimize waiting times for all customers?

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> prepTimes = {15, 8, 3, 10, 12}; // Example preparation times in minutes
    int n = prepTimes.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (prepTimes[j] > prepTimes[j + 1]) {
                swap(prepTimes[j], prepTimes[j + 1]);
            }
        }
    }

    // Calculate the total waiting time
    int totalWaitingTime = 0;
    int currentTime = 0;

    for (int time : prepTimes) {
        currentTime += time;  // Update current time by adding the preparation time of the current dish
        totalWaitingTime += currentTime;  // Add current time to total waiting time
    }

    cout << "Total minimum waiting time for all customers: " << totalWaitingTime << " minutes" << endl;

    return 0;
}