#include <iostream>
#include <string>
using namespace std;

class Employee
{
   //private:
    
   public:
   int salary;

    // Constructor
      Employee()
    {
        cout << "Default constructor is called" << endl;
        salary=50000;
        cout<<salary<<endl;
    }

//Contructor
     Employee (int s)
     {
        cout << " Parameterised contructor is called: " << endl;
        salary=s;
        cout <<salary<< endl;
     }

     Employee (Employee &obj)
     {
        cout<<obj.salary;
     }

     ~Employee()
     {
        cout<<"Destructoe is called";
     }

};
int main()
{
    Employee e1, e2(10000), e3=e2;
    cout<<e1.salary<<endl;
//     cout<<e2.salary<<end;
//     cout<<e3.salary<<end;
}
        
  

