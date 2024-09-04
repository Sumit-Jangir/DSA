// Create a class Car with private data members: model, manufacturer, and price. Implement getDetails() and setDetails() using a default constructor to set values

#include <bits/stdc++.h>
using namespace std;

class Car {
private:
    string model;
    string manufacturer;
    double price;

public:
    Car() {
        model = "Unknown";
        manufacturer = "Unknown";
        price = 0.0;
    }

    void setDetails(string mod, string manuf, double pr) {
        model = mod;
        manufacturer = manuf;
        price = pr;
    }

    void getDetails() const {
        cout << "Model: " << model << endl;
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Car car1;  

    cout << "Default Car Details:" << endl;
    car1.getDetails();

    car1.setDetails("Mustang", "Ford", 55000);

    cout << "\nUpdated Car Details:" << endl;
    car1.getDetails();

    return 0;
}