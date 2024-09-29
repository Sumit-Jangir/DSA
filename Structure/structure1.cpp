// Student Structure: Create a structure for Student that stores student name, roll number, and marks in 5 subjects. Write a program to find the average marks of each student.


#include <bits/stdc++.h>
using namespace std;

struct student{
    string name;
    int rollno = 67;
    float marks[5];
    float avg;

    float avgMarks(){
        avg = 0.0;
        for(int i=0;i<5;i++){
            avg += marks[i];
        }
        return avg/5;
    }

};
int main(){
    student obj1;
    cout << "Enter student name: ";
    cin>>obj1.name;
     cout << "Enter roll number: ";
    cin>>obj1.rollno;
    cout << "Enter marks for 5 subjects: ";
    for(int i=0;i<5;i++){
        cin>>obj1.marks[i];
    }
    cout<<"average marks is  " <<obj1.avgMarks();
    return 0;
}