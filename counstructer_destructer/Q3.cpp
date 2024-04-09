//Q3)= /Write a C++ program to create a class called Car that has private
// member variables for company, model, and year. Implement member
// functions to get and set these variables
#include<iostream>
#include<string>
using namespace std;

class car{
    private:
    string company;
    string model;
    int year;

    public:
    //seting data
    void setcompany(string c){
        company=c;
    }
    void setmodel(string m){
        model=m;
    }
    void setyear(int y){
        year=y;
    }
//  geting data
    string getcompany(){
        return company;
    }
    string getmodel(){
        return model;
    }
    int getyear(){
        return year;
    }

};
int main(){
    car car1;
    car1.setcompany("toyota");
    car1.setmodel("corolla");
    car1.setyear(2022);

    cout<<"Company="<<car1.getcompany()<<endl;
    cout<<"Model="<<car1.getmodel()<<endl;
    cout<<"Year="<<car1.getyear()<<endl;
}