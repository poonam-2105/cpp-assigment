// Q4)=// Write a C++ program to implement a class called Circle that has private
// member variables for radius. Include member functions to calculate the
// circle's area and circumference.

#include<iostream>
using namespace std;
  

class circle{

    private:
    float radious;

    public:
    circle(float a){
        radious=a;
    }

    
    float circlearea(){
        return 3.14159*radious*radious;
    }
    float circumference(){
        return 2 * 3.14159 * radious;
    }
};
int main(){
    float obj;
    cout<<"enter the obj\n";
    cin>>obj;

    circle c(obj);
    
    float area=c.circlearea();
    float circlecircumfernce=c.circumference();

    cout<<"area of circle="<<area<<"\n";
    cout<<"circumference of circle="<<circlecircumfernce<<"\n";

}