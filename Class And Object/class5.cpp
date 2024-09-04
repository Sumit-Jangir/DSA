// Implement a class Laptop with private data members: brand, processor, ram. Use both default and parameterized constructors.

#include <bits/stdc++.h>
using namespace std;

class Laptop {
    string brand;
    string processor;
    int ram;

public:
    Laptop() : brand("Unknown"), processor("Unknown"), ram(0) {}

    Laptop(string b, string p, int r) {
        brand = b;
        processor = p;
        ram = r;
    }

    void displayDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Processor: " << processor << endl;
        cout << "RAM: " << ram << "GB" << endl;
    }

};

int main() {
    Laptop laptop1;
    Laptop laptop2("Dell", "Intel i7", 16);

    laptop1.displayDetails();
    laptop2.displayDetails();

    return 0;
}