    //Calculator

#include <iostream>
using namespace std;

class Calculator
{
  private:
    int addition;
    int subtraction;
    int multiplication;
    int division;

  public:
    Calculator()
    {
        addition = 0;
        subtraction = 0;
        multiplication = 0;
        division = 0;
    }

    void setdata(int a, int s, int m, int d)
    {
        addition = a;
        subtraction = s;
        multiplication = m;
        division = d;
    }

    void displayData()
    {
        cout << "Addition: " << addition << endl;
        cout << "Subtraction: " << subtraction << endl;
        cout << "Multiplication: " << multiplication << endl;
        cout << "Division: " << division << endl;
    }

    int performOperation(int choice, int num1, int num2)
    {
        switch (choice)
        {
        case 1:
            return num1 + num2;
        case 2:
            return num1 - num2;
        case 3:
            return num1 * num2;
        case 4:
            if (num2 != 0)
                return num1 / num2;
            else
            {
                cout << "Error! Division by zero." << endl;
                return 0;
            }
        default:
            cout << "Invalid choice!" << endl;
            return 0;
        }
    }
};

int main()
{
    int num1, num2, choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Select operation:\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout << "Enter choice (1-4): ";
    cin >> choice;

    Calculator myCalculator;
    myCalculator.setdata(num1, num2, num1 * num2, (num2 != 0) ? num1 / num2 : 0);

    int result = myCalculator.performOperation(choice, num1, num2);

    cout << "Result: " << result << endl;

    return 0;
}