// Design a class Hotel with private members: name, location, and rating. Provide methods for setting and getting these details

#include <bits/stdc++.h>
using namespace std;

class Hotel {
private:
    string name;
    string location;
    double rating;

public:
    void setDetails() {
        cout << "Enter Hotel Name: ";
        cin>>name;
        cout << "Enter Location: ";
        cin>>location;
        cout << "Enter Rating: ";
        cin>>rating;
    }

    void displayDetails() const {
        cout << "Hotel Name: " << name << endl;
        cout << "Location: " << location << endl;
        cout << "Rating: " << rating << endl;
    }
};

int main() {
    Hotel hotel;

    hotel.setDetails();
    hotel.displayDetails();

    return 0;
}
