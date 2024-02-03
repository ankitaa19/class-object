    // Multiple Inheritance

#include <iostream>
using namespace std;

// Base 1
class A {
public:
    int x;

    void getx() {
        cout << "Enter the value of x: ";
        cin >> x;
    }
};

// Base 2
class B {
public:
    int y;

    void gety() {
        cout << "Enter the value of y: ";
        cin >> y;
    }
};

// Derived class C from A and B
class C : public A, public B {
public:
    void sum() {
        cout << "Sum = " << x + y << endl;
    }
};

int main() {
    C obj; // Object of derived class
    obj.getx(); // Use getx from class A
    obj.gety(); // Use gety from class B
    obj.sum();  // Use sum from class C

    return 0;
}