/*
Create a structure in C++ containing the details of Students as details below and a 
main function to execute the structure.  
            Data Members(properties): 
                    Name 
                    Roll No 
                    Degree 
                    Hostel 
                    CurrentCGPA 
 
            Member Function(behavior): 
                addDetails(); 
                updateDetails(); 
                updateCGPA(); 
                updateResidenceInfo(); 
                displaydetails(); 
*/
#include<iostream>
#include<string>
using namespace std;
#include <iostream>
#include <string>

// Define the Student structure
struct Student {
    string name;
    int rollNo;
    string degree;
    string hostel;
    double currentCGPA;

    // Member function to add details
    void addDetails() {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Degree: ";
        cin >> degree;
        cout << "Enter Hostel: ";
        cin >> hostel;
        cout << "Enter Current CGPA: ";
        cin >> currentCGPA;
    }

    // Member function to update details
    void updateDetails() {
        cout << "Enter New Name: ";
        cin >> name;
        cout << "Enter New Roll No: ";
        cin >> rollNo;
        cout << "Enter New Degree: ";
        cin >> degree;
        cout << "Enter New Hostel: ";
        cin >> hostel;
        cout << "Enter New Current CGPA: ";
        cin >> currentCGPA;
    }

    // Member function to update CGPA
    void updateCGPA() {
        cout << "Enter New CGPA: ";
        cin >> currentCGPA;
    }

    // Member function to update residence info
    void updateResidenceInfo() {
        cout << "Enter New Hostel: ";
        cin >> hostel;
    }

    // Member function to display details
    void displayDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "Current CGPA: " << currentCGPA << endl;
    }
};

int main() {
    Student student;

    // Add details
    cout << "Adding Student Details:" << endl;
    student.addDetails();

    // Display details
    cout << "\nStudent Details:" << endl;
    student.displayDetails();

    // Update details
    cout << "\nUpdating Student Details:" << endl;
    student.updateDetails();

    // Display updated details
    cout << "\nUpdated Student Details:" << endl;
    student.displayDetails();

    // Update CGPA
    cout << "\nUpdating CGPA:" << endl;
    student.updateCGPA();

    // Display details after updating CGPA
    cout << "\nStudent Details after Updating CGPA:" << endl;
    student.displayDetails();

    // Update residence info
    cout << "\nUpdating Residence Info:" << endl;
    student.updateResidenceInfo();

    // Display details after updating residence info
    cout << "\nStudent Details after Updating Residence Info:" << endl;
    student.displayDetails();

    return 0;
}

