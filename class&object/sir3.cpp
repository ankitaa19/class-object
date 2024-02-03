  //average


#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentName;
    int *grades;
    int numGrades;

public:
    // Constructor
    Student(const string &name, int numGrades) {
        studentName = name;
        this->numGrades = numGrades;
        grades = new int[numGrades];
    }

    // Destructor
    ~Student() {
        delete[] grades;
    }

    // Method to add grades
    void addGrades() {
        cout << "Enter grades for " << studentName << ":\n";
        for (int i = 0; i < numGrades; ++i) {
            cout << "Grade " << i + 1 << ": ";
            cin >> grades[i];
        }
    }

    // Method to calculate average grade
    double calculateAverage() {
        if (numGrades == 0) {
            return 0.0;
        }

        int sum = 0;
        for (int i = 0; i < numGrades; ++i) {
            sum += grades[i];
        }

        return static_cast<double>(sum) / numGrades;
    }

    
    void displayStudentInfo() {
        cout << "Student Name: " << studentName << "\n";
        cout << "Grades: ";
        for (int i = 0; i < numGrades; ++i) {
            cout << grades[i] << " ";
        }
        cout << "\n";
        cout << "Average Grade: " << calculateAverage() << "\n";
    }
};

int main() {
    
    Student student("Ankita Lokhande", 8);
    student.addGrades();
    student.displayStudentInfo();

    return 0;
}