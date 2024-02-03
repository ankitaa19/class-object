    //write a c++ program to read and print student info for b.tech addmission employee designation are principal, proffessor and lab assistance


#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Student : public Person {
public:
    string course;
    float grade;
    float mhtCetPercentile;

    void readStudentInfo() {
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter student age: ";
        cin >> age;

        cout << "Enter B.Tech course: ";
        cin.ignore();
        getline(cin, course);

        cout << "Enter grade: ";
        cin >> grade;

        cout << "Enter MHT CET Percentile: ";
        cin >> mhtCetPercentile;
    }

    void printStudentInfo() {
        cout << "Student Information:\n";
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Course: " << course << "\n";
        cout << "Grade: " << grade << "\n";
        cout << "MHT CET Percentile: " << mhtCetPercentile << "\n";
    }

    bool isEligibleForBTech() {
            return mhtCetPercentile >= 70.0;
    }
};

class Employee : public Person {
public:
    string designation;

    void readEmployeeInfo() {
        cout << "Enter employee name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter employee age: ";
        cin >> age;

        cout << "Enter designation (Principal/Professor/Lab Assistant): ";
        cin.ignore();
        getline(cin, designation);
    }

    bool isEligibleForDesignation() {
        // Define eligibility criteria for each designation
        if (designation == "Principal") {
            // Example criteria for Principal
            return age <= 40 && age <= 60;
        } else if (designation == "Professor") {
            // Example criteria for Professor
            return age <= 30;
        } else if (designation == "Lab Assistant") {
            // Example criteria for Lab Assistant
            return age <= 20 && age <= 35;
        } else {
            // Unknown designation
            cout << "Unknown designation. Please enter Principal, Professor, or Lab Assistant.\n";
            return false;
        }
    }

    void printEmployeeInfo() {
        cout << "Employee Information:\n";
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Designation: " << designation << "\n";
    }
};

int main() {
    Student student;
    Employee employee;

    cout << "=== Student Information ===\n";
    student.readStudentInfo();
    student.printStudentInfo();

    if (student.isEligibleForBTech()) {
        cout << "Congratulations! You are eligible for B.Tech admission.\n";
    } else {
        cout << "Sorry, you are not eligible for B.Tech. Consider other courses.\n";
    }

    cout << "=== Employee Information ===\n";
    employee.readEmployeeInfo();

    if (employee.isEligibleForDesignation()) {
        cout << "Congratulations! You are eligible for the position of " << employee.designation << ".\n";
    } else {
        cout << "Sorry, you are not eligible for the position of " << employee.designation << ".\n";
    }

    return 0;
}