// Design a class Employee with private data members: employeeID, name, and department. Use a parameterized constructor to initialize the object.

#include <bits/stdc++.h>
using namespace std;

class Employee{
    private:
    int employeeID;
    string name;
    string department;

    public:
    Employee(int emId, string naam,string dept){
        employeeID = emId;
        name = naam;
        department = dept;
    }

    void display(){
        cout<<"Employee ID: "<<employeeID<<endl;
        cout<<"Employee name: "<<name<<endl;
        cout<<"Employee Department: "<<department<<endl;
    }

};

int main(){

    Employee sumit(22,"sumit","It");
    sumit.display();
    
    return 0;
}