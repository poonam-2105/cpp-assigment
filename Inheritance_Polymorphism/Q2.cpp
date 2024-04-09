// Q2)=Write a C++ Program to find Area of Rectangle using inheritance
#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    float length;
    float width;
};

// Derived class Rectangle inherits Shape
class Rectangle : public Shape {
public:
    float area() { 
        return length * width; 
        }
};

int main() {
    Rectangle rect;

    // User input for length and width
    cout << "Enter length and width of the rectangle: ";
    cin >> rect.length;
    cin >> rect.width;

    // Displaying area of rectangle
    cout << "Area of rectangle: " << rect.area() << endl;

    return 0;
}
