// Design a class Employee with private members: name, designation, and salary. Use a method calculateBonus() to compute the annual bonus.

#include <bits/stdc++.h>
using namespace std;

class Employee {
private:
    string name;
    string designation;
    double salary;

public:
    Employee() : name(""), designation(""), salary(0.0) {}

    Employee(string empName, string empDesignation, double empSalary) {
        name = empName;
        designation = empDesignation;
        salary = empSalary;
    }

    void setDetails(string empName, string empDesignation, double empSalary) {
        name = empName;
        designation = empDesignation;
        salary = empSalary;
    }

    double calculateBonus() const {
        return salary * 0.10; // 10% of the salary as bonus
    }

    void displayDetails() const {
        cout << "Name: " << name << endl;
        cout << "Designation: " << designation << endl;
        cout << "Salary: $" << salary << endl;
        cout << "Annual Bonus: $" << calculateBonus() << endl;
    }
};

int main() {
    Employee emp;
    emp.setDetails("John Doe", "Software Engineer", 60000);
    emp.displayDetails();
    return 0;
}
