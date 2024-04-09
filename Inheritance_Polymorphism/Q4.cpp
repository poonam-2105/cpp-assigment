// Q4)=Write a C++ Program display Student Mark sheet using Multiple inheritance
#include<iostream>
#include<string>
using namespace std;

class student{
    protected:
    string name;
    int roll_number;

    public:
    void studentdata(string n,int r){
        name=n;
        roll_number=r;
    }

    void getdata(){
        cout<<"NAME IS   "<<name <<"  AND"<<"ROLL_NUMBER OF THE STUDEN IS "<<roll_number<<endl;
    }

};
class maths{
    protected:
    int maths;

    public:
    void setmaths(int m){
        maths=m;
    }
    void getmaths(){
        cout<<"marks of maths="<<maths<<endl;
    }
};
class english{
    protected:
    int english;

    public:
    void setenglish(int e){
        english=e;
    }
    void getenglish(){
        cout<<"marks of english="<<english<<endl;
    }
};
class science{
    protected:
    int science;

    public:
    void setscience(int s){
        science=s;
    }
    void getscience(){
        cout<<"marks of science="<<science<<endl;
    }
};

class marksheet: public student,public maths,public english,public science{
   public:
    void dispalyemarksheet(){
        getdata();
        getmaths();
        getenglish();
        getscience();
    }
};
int main(){
    marksheet A;
    A.studentdata("poonam",1);
    A.setmaths(50);
    A.setenglish(60);
    A.setscience(70);

    A.dispalyemarksheet();

}