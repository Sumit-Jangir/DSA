// Student Structure: Create a structure for Student that stores student name, roll number, and marks in 5 subjects. Write a program to find the average marks of each student.

#include <bits/stdc++.h>
using namespace std;

struct Student {
    string sname;
    int rollno;
    float marks[5];
    float average = 0.0;

    float averagemarks() {
        average = 0.0; // Reset average to 0.0 each time the function is called
        for (int i = 0; i < 5; i++) {
            average += marks[i];
        }
        return average / 5.0;
    }
};

int main() {
    Student obj;
    cout << "Enter student name: ";
    cin >> obj.sname;
    cout << "Enter roll number: ";
    cin >> obj.rollno;
    cout << "Enter marks for 5 subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> obj.marks[i];
    }

    cout << fixed << setprecision(2);
    cout << "Average of marks = " << obj.averagemarks() << endl;

    return 0;
}


struct Student
{
    string sname;
    int rollno;
    float marks[5];
    float average=0.0;
    float averagemarks()
    {
        for(int i=0;i<5;i++)
        {
            average+=marks[i];
        }
        return average/5.0;
    }
};



int main()
{
    Student obj;
    cin>>obj.sname;
    cin>>obj.rollno;
    for(int i=0;i<5;i++)
    {
        cin>>obj.marks[i];
    }
    cout<<"Average of marks= "<<obj.averagemarks();
    return 0;
}