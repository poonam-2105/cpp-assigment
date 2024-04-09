//Q7)= Write a C++ program to implement a class called Date that has private
// member variables for day, month, and year. Include member functions to
// set and get these variables, as well as to validate if the date is valid

#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    // Constructor
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Member function to set date
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Member function to get day
    int getDay() {
        return day;
    }

    // Member function to get month
    int getMonth() {
        return month;
    }

    // Member function to get year
    int getYear() {
        return year;
    }

    // Member function to validate if the date is valid
    bool isvalid() {
        if (year < 0 || month < 1 || month > 12 || day < 1)
            return false;

        switch (month) {
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) // Leap year
                    return (day <= 29);
                else
                    return (day <= 28);
            case 4: 
            case 6: 
            case 9: 
            case 11:
                return (day <= 30);
            default:
                return (day <= 31);
        }
    }
};

int main() {
    // Create a Date object
    Date myDate(30, 2, 2024); // Leap year, valid date

    // Display date details
    cout << "Date: " << myDate.getDay() << "/" << myDate.getMonth() << "/" << myDate.getYear() << endl;

    // Check if the date is valid
    if (myDate.isvalid())
        cout << "This date is valid." << endl;
    else
        cout << "This date is not valid." << endl;

    return 0;
}
