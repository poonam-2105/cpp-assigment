// Write a programto find the multiplication values and the cubic values
// usinginline function
#include <iostream>
using namespace std;

// Inline function to find multiplication values
inline int multiply(int a, int b) {
    return a * b;
}

// Inline function to find cubic value
inline int cubic(int num) {
    return num * num * num;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // Calculate and display multiplication values
    cout << "Multiplication values:" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << num << " x " << i << " = " << multiply(num, i) << endl;
    }

    // Calculate and display cubic value
    cout << "Cubic value of " << num << " is: " << cubic(num) << endl;

    return 0;
}
