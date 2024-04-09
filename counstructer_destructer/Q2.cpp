// Q2)=. Write a program of Addition, Subtraction, Division, Multiplication
// using constructor.

#include<iostream>
using namespace std;

class clacualter{

    private:
    int num1,num2;
    public:

    //constructer
    clacualter(int a,int b){
        num1=a;
        num2=b;
    }

    // add data
    int adddata(){
        return num1+num2;
    }

    // multiply data
    int  multiplydata(){
        return num1*num2;
    }
    // divide data
    float dividedata(){
        return num1/num2;
    }
    // subtract data
    int subtracedata(){
        return num1-num2;
    }
};

int main(){
    int a,b;
    cout<<"enter the data=";
    cin>>a;
    cin>>b;

    clacualter number(a,b);

    cout<<"additon="<< number.adddata()<<endl;
    cout<<"divition of data="<< number.dividedata()<<endl;
    cout<<"multiplication="<<number.multiplydata()<<endl;
    cout<<"subtraction of data="<<number.subtracedata()<<endl;

}
