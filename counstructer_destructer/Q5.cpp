//Q5)= Write a C++ program to create a class called Triangle that has private
// member variables for the lengths of its three sides. Implement member
// functions to determine if the triangle is equilateral, isosceles, or scalene.
#include <iostream>
using namespace std;

class Triangle {
private:
    float side1, side2, side3;

public:
    // Constructor
    Triangle(float s1, float s2, float s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    // Member function to determine if the triangle is equilateral
    float isequilateral() {
        return (side1 == side2 && side2 == side3);
    }

    // Member function to determine if the triangle is isosceles
    float isisosceles() {
        return (side1 == side2 || side1 == side3 || side2 == side3);
    }

    // Member function to determine if the triangle is scalene
    float isscalene() {
        return (side1 != side2 && side1 != side3 && side2 != side3);
    }
};

int main() {
    // Create a Triangle object
    Triangle myTriangle(3.0, 3.0, 3.0); // Equilateral triangle

    // Check type of triangle
    if (myTriangle.isequilateral())
        cout << "The triangle is equilateral." << endl;
    else if (myTriangle.isisosceles())
        cout << "The triangle is isosceles." << endl;
    else if (myTriangle.isscalene())
        cout << "The triangle is scalene." << endl;

    return 0;
}
