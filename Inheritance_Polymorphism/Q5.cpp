//Q5)= . Assume that the test results of a batch of students are stored in three
// different classes. Class Students are storing the roll number. Class Test 
// stores the marks obtained in two subjects and class result contains the 
// total marks obtained in the test. The class result can inherit the details 
// of the marks obtained in the test and roll number of students.
// (Multilevel Inheritance)
#include<iostream>
#include<string>
using namespace std;

// multiplevel inheritance

// student class
class student{
    protected:
    string name;
    int roll;

    public:
    void setdata(string n,int r){
        name=n;
        roll=r;
    }

    void getdata(){
        cout<<"name of the studen is:"<<name<<endl;
        cout<<"roll number:"<<roll<<endl;
    }
};

// test class
class test_marks:public student{
    protected:
    int maths;
    int english;

    public:
    void settestmarks(int m,int e){
        maths=m;
        english=e;
    }
    void gettestmarks(){
        cout<<"subj1="<<maths<<endl;
        cout<<"subj2="<<english<<endl;
    }
};
// result class
class result :public test_marks{
    protected:
    int result;

    public:
    void calculatemarks(){
        result= maths+english; //calculates marks of the subjects
    }

    void getresult(){
        getdata();
        gettestmarks();
        cout<<"total marks is:"<<result<<endl;
    }
};
int main(){
    result student;
    // displaye the information
    student.setdata("poonam",10);
    student.settestmarks(50,60);
    student.calculatemarks();
    student.getresult();
}