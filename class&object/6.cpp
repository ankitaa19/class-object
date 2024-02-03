#include <iostream>
using namespace std;

class Shape {
public:
    int height, width;

    void setHeight(int h) {
        height = h;
    }

    void setWidth(int w) {
        width = w;
    }
};

class Triangle : public Shape {
public:
    int base;

    int getArea() {
        return 0.5 * base * height;
    }
};

class Rectangle : public Shape {
public:
    int length;

    int getArea() {
        return length * height;
    }
};

class Circle : public Shape {
public:
    int radius;

    double getArea() {
        return 3.14159 * radius * radius;
    }
};

int main() {
    int b, h, w, r;

    cout << "Width: ";
    cin >> w;

    cout << "Height: ";
    cin >> h;

    cout << "Base (for triangle): ";
    cin >> b;

    cout << "Radius (for circle): ";
    cin >> r;

    Triangle triangle;
    Rectangle rectangle;
    Circle circle;

    triangle.setWidth(w);
    triangle.setHeight(h);
    triangle.base = b;
    rectangle.setWidth(w);
    rectangle.setHeight(h);
    rectangle.length = b;
    circle.setWidth(w);
    circle.setHeight(h);
    circle.radius = r;

    cout << "Triangle Area: " << triangle.getArea() << endl;
    cout << "Rectangle Area: " << rectangle.getArea() << endl;
    cout << "Circle Area: " << circle.getArea() << endl;

    return 0;
}