    //list and marks of the student


#include <iostream>
#include <string>
using namespace std;

class Students
{
private:
    int roll;
    int marks;
    string name;

public:
    void setData(int r, string n, int m)
    {
        roll = r;
        name = n;
        marks = m;
    }

    void displayData()
    {
        cout << "Roll:  " << roll << endl;
        cout << "Name:  " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Students student1;
    student1.setData(1, "Ankita Lokhande", 75);
    student1.displayData();
cout<<"\n";
    Students student2;
    student2.setData(2, "Akriti", 90);
    student2.displayData();
cout<<"\n";
    Students student3;
    student3.setData(3, "Shikha", 78);
    student3.displayData();
cout<<"\n";
    Students student4;
    student4.setData(4, "Riya Singh", 88);
    student4.displayData();
cout<<"\n";
    Students student5;
    student5.setData(5, "Bhagyashree Bhagat", 90);
    student5.displayData();
cout<<"\n";
    Students student6;
    student6.setData(6, "Gaurang", 79);
    student6.displayData();

   return 0;
}