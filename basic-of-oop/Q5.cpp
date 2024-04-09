// Q5)=Write a C++ program to create a class called Rectangle that has private
// member variables for length and width. Implement member functions to
// calculate the rectangle's area and perimeter.
#include<iostream>
using namespace std;

class reactangle{
    private:
    float lenght;
    float weigth;

    public:
    reactangle(float l,float w){
       lenght=l;
       weigth=w;
    }

    float areaofreactangel(){
        return lenght*weigth;
    }
    float perimeterofrectangle(){
        return 2*(lenght+weigth);
    }
};
int main(){

    float obj1 , obj2;
    cout<<"enter the data:\n";
    cin>>obj1;
    cin>>obj2;

    reactangle c(obj1,obj2);

    float area=c.areaofreactangel();
    float perimeter=c.perimeterofrectangle();

    cout<<"area of reactange is="<<area<<endl;
    cout<<" perimeter of reactangle is="<<perimeter<<endl;

}
