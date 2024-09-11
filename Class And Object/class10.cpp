// Define a class Gym with private members: gymName, location, and membershipFee. Provide methods to manage gym attributes.

#include <bits/stdc++.h>
using namespace std;

class Gym {
private:
    string gymName;
    string location;
    double membershipFee;

public:
    Gym() : gymName(""), location(""), membershipFee(0.0) {}

    Gym(string name, string loc, double fee) {
        gymName = name;
        location = loc;
        membershipFee = fee;
    }

    void displayGymDetails() const {
        cout << "Gym Name: " << gymName << endl;
        cout << "Location: " << location << endl;
        cout << "Membership Fee: $" << membershipFee << endl;
    }
};

int main() {
    Gym gym("Fitness Hub", "jaipur", 49.99);
    gym.displayGymDetails();
    return 0;
}
