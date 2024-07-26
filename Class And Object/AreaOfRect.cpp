#include <iostream>
using namespace std;

class Area {
private:
    double length;
    double breadth;

public:

    void setDim(double len, double brd) {
        length = len;
        breadth = brd;
    }


    double getArea() {
        return length * breadth;
    }
};

int main() {
    Area rectangle; 

    double length, breadth;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    rectangle.setDim(length, breadth);

    double area = rectangle.getArea();
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
