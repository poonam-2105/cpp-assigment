// 6. Write a C++ program to create a class called Person that has private
// member variables for name, age and country. Implement member
// functions to set and get the values of these variables.

#include<iostream>
#include<string>
using namespace std;



class person{

    private:
    int age;
    string name;
    string country;

    public:


    void setage(int a){
        age=a;
    }
    void setname(string n){
        name=n;
    }

    void setcountry(string c){
        country=c;
    }

    string getname() {
        return name;
    }

    int getage() {
        return age;
    }

    string getcountry() {
        return country;
    }
};

int main() {
    person person;

    person.setname("poonam");
    person.setage(19);
    person.setcountry("india");

    cout << "Name: " << person.getname() << endl;
    cout << "Age: " << person.getage() << endl;
    cout << "Country: " << person.getcountry() << endl;

    return 0;
}

