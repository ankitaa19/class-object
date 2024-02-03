    // give that employee class content following              : data members, employee no. employee name, basics, DA, net salary and print data members

#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int employeeNo;
    string employeeName;
    float basics;
    float DA;
    float netSalary;

    void readEmployeeInfo() {
        cout << "Enter employee number: ";
        cin >> employeeNo;

        cout << "Enter employee name: ";
        cin.ignore(); 
        getline(cin, employeeName);

        cout << "Enter basics salary: " << "is"  <<  "67000";
        cin >> basics;

        cout << "Enter DA (Dearness Allowance): ";
        cin >> DA;
        netSalary = basics + DA;
    }

    void printEmployeeInfo() {
        cout << "Employee Information:\n";
        cout << "Employee Number: " << employeeNo << "\n";
        cout << "Employee Name: " << employeeName << "\n";
        cout << "Basics Salary: " << basics << "\n";
        cout << "Dearness Allowance (DA): " << DA << "\n";
        cout << "Net Salary: " << netSalary << "\n";
    }
};

int main() {
    Employee employee;

    cout << "HOD \n";
    employee.readEmployeeInfo();

    cout << "\n";
    employee.printEmployeeInfo();

    return 0;
}