//Q3)= Create a class person having members name and age. Derive a class
// student having member percentage. Derive another class teacher 
// having member salary. Write necessary member function to initialize, 
// read and write data. Write also Main function (Multiple Inheritance)
#include<iostream>
#include<string>
using namespace std;

class person{
    protected:
    int age;
    string name;

    public:
    void setdata(int a,string n){
        age=a;
        name=n;
    }
    void getdata(){
        cout<<"AGE OF PERSON:"<<age<<endl;
        cout<<"NAME OF PERSON:"<<name<<endl;

    }    
    
};
class student : public person{
    private:
    float percentage;

    public:

    void setpercentage(float p){
        percentage=p;
    }
    void getpercentage(){
        cout<<"PERCENTAGE OF STUDENT:"<<percentage<<endl;
    }
};
class teacher:public person{
    private:
    int salary;

    public:
    void setsalary(int s){
        salary=s;
    }
    void getsalary(){
        cout<<"SALARY  OF TEACHER:"<<salary<<endl;
    }
};
int main(){
    student s;
    teacher t;

    cout<<"ENTER THE STUDENT NAME:";
    string s_namee;
    cin>>s_namee;
    s.setdata(12,s_namee);

    cout<<"ENTER THE STUDENT PERSENTAGE:";
    float s_percentage;
    cin>>s_percentage;
    s.setpercentage(s_percentage);


    cout<<"ENTER THE NAME OF THE TEACHER:";
    string t_name;
    cin>>t_name;
    t.setdata(30,t_name);
    
    cout<<"ENTER THE TEACHER SALARY:";
    int t_salary;
    cin>>t_salary;
    t.setsalary(t_salary);

    cout<<"_____________________________________________________________"<<endl;
    s.getdata();
    s.getpercentage();
   
    cout<<"_____________________________________________________________"<<endl;

    t.getdata();
    t.getsalary();
  
    
}
