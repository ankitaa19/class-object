    //Multi-Level Inheritance

#include <iostream>
using namespace std;

// Single Base Class
class Base {
public:
    int x;
    void getData() {
        cout << "Enter value of x: ";
        cin >> x;
    }
};

// Derived Class 1 from Base class
class Derived1 {
public:
    int y;
    void readData() {
        cout << "\nEnter value of y: ";
        cin >> y;
    }
};

// Derived Class 2: Derived from Derived1
class Derived2 : public Derived1 {
private:
    int z;

public:
    void initZ() {
        cout << "\nEnter the value of z: ";
        cin >> z;
    }

    void product() {
        cout << "\nProduct = " << x * y * z << endl;
    }
};

int main() {
    Derived2 obj; // Object of Derived2 class

   a.getData();   // Access getData from Base class
   a.readData();  // Access readData from Derived1 class
   a.initZ();     // Access initZ from Derived2 class
   a.product();   // Access product from Derived2 class

    return 0;
}

