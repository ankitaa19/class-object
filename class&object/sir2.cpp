//Student and new student's average marks
    
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int* grades;  
    int numGrades; 

public:
    // Constructor
    Student(const string& studentName, int maxGrades) : name(studentName), numGrades(0) {
        grades = new int[maxGrades];
    }

    // Destructor
    ~Student() {
        delete[] grades;  
    }
    void addGrade(int grade) {
        grades[numGrades++] = grade;
    }
    double calculateAverage() const {
        if (numGrades == 0) {
            return 0.0;  
        }

        int sum = 0;
        for (int i = 0; i < numGrades; ++i) {
            sum += grades[i];
        }

        return static_cast<double>(sum) / numGrades;
    }
   // Method to display student information
    void displayInfo() const {
        cout << "Student Name: " << name << endl;
        cout << "Grades: ";
        for (int i = 0; i < numGrades; ++i)
         {
            cout << grades[i] << " ";
         }
        cout << endl;
        cout << "Average Grade: " << calculateAverage() << endl;
    }
};

int main() {    
    Student student1("Ankita Lokhande", 1);
    student1.addGrade(85);
    student1.addGrade(90);
    student1.addGrade(78);
    // Display student information
    student1.displayInfo(); 
cout<<"\n";
   Student student2("Akriti", 2);
    student2.addGrade(85);
    student2.addGrade(90);
    student2.addGrade(78);
    student2.displayInfo();
cout<<"\n";
   Student student3("Riya", 3);
    student3.addGrade(85);
    student3.addGrade(90);
    student3.addGrade(78);
    student3.displayInfo();
cout<<"\n";
   Student student4("Ayush Chonkar", 4);
    student4.addGrade(85);
    student4.addGrade(90);
    student4.addGrade(78);
    student4.displayInfo();
cout<<"\n";

   return 0;
}