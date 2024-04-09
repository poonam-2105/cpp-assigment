//Q6)= Write a C++ program to implement a class called Employee that has
// private member variables for name, employee ID, and salary. Include
// member functions to calculate and set salary based on employee
// performance. Using of constructor
#include<iostream>
#include<string>
using namespace std;

class employee{
private :

// data members
string employeename;
int employeeid;
int employesalary;

public:
// constructer
employee(string empnam,int empid,int epmsala){
    employeename=empnam;
    employeeid=empid;
    employesalary=epmsala;
}

// calculating employe salary and set salary based of performence;
void setsalary(float performence){
    employesalary*=performence;
}

string getname(){
    return employeename;
}

int getid(){
    return employeeid;
}

int getsalary(){
    return employesalary;
}
  
};
int main(){
 // Create an Employee object
    employee emp("poonam", 123456, 50000);

    // Display initial employee details
    cout << "Initial employee details:" << endl;
    cout << "Name: " << emp.getname() << endl;
    cout << "Employee ID: " << emp.getid() << endl;
    cout << "Salary: $" << emp.getsalary() << endl;

    //performence evaluation and adjust salary
    emp.setsalary(1.1); // Performance factor = 1.1, 10% raise

    // Display updated employee details
    cout << "\nUpdated employee details:" << endl;
    cout << "Name: " << emp.getname() << endl;
    cout << "Employee ID: " << emp.getid() << endl;
    cout << "Salary: $" << emp.getsalary() << endl;

    return 0;
}
