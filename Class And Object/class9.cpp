// Implement a class Patient with private members: patientID, name, and diagnosis. Include methods to set and get patient details.

#include <bits/stdc++.h>
using namespace std;

class Patient
{
private:
    int patientID;
    string name;
    string diagnosis;

public:
    Patient() : patientID(0), name(""), diagnosis("") {}

    Patient(int id, string patientName, string patientDiagnosis)
    {
        patientID = id;
        name = patientName;
        diagnosis = patientDiagnosis;
    }


    void displayDetails() const
    {
        cout << "Patient ID: " << patientID << endl;
        cout << "Name: " << name << endl;
        cout << "Diagnosis: " << diagnosis << endl;
    }
};

int main()
{
    Patient patient(1, "aman", "sonu");
    patient.displayDetails();
    return 0;
}
