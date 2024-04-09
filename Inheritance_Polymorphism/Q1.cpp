//Q1)= Assume a class cricketer is declared. Declare a derived class batsman 
// from cricketer. Data member of batsman. Total runs, Average runs and 
// best performance. Member functions input data, calculate average 
// runs, Displaydata.(Single Inheritance)
#include<iostream>
#include<string>
using namespace std;

class cricketer{
    protected:
    string name;
    int age;
    public:
     
     void inputdata(string n,int a){
        name=n;
        age=a;
     }

     void displayedata(){
      cout<<"name="<<name<<endl;
      cout<<"age="<<age<<endl;     }

};

class batsman :public cricketer{
    private:
    
    int total_run;
    float average_runs;
    int best_performance;

    public:
    void inputdata(string name ,int age,int run,int best){
        cricketer::inputdata(name,age);
        total_run=run;
        best_performance=best;
        calculateaveragerun(); 
    }

     void calculateaveragerun(){
       average_runs = total_run/ 5.0;
     }


     void displayedata(){
        cricketer::displayedata();
        cout<<"totalrun="<<total_run<<endl;
        cout<<"averagerun="<<average_runs<<endl;
        cout<<"best performence="<<best_performance<<endl;
     }

};
int main(){
    batsman palyer;

    palyer.inputdata("poonam",19,150,500);
    palyer.displayedata();

}
