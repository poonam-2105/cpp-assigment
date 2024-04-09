//Q4)= Write a C++ program to implement a class called Bank Account that has
// private member variables for account number and balance. Include
// member functions to deposit and withdraw money from the account.
#include<iostream>
using namespace std;

class bankaccount{
    private:
    int accountnumber;
    int balance=0;


  public:
// construter
   bankaccount(int accoutnum,int intialbalance){
    accountnumber=accoutnum;
    balance=intialbalance;
   }

//deposit fuction to deposite amount
   void deposite(int a){
    cout<<"balance=$"<<balance<<"\n";
     balance+=a;
     cout<<"afet deposite  balance is=$"<<balance<<"\n";
   }
   
//witdrawfuction 
   void withdrawamount(int b){
     if ( balance>=b){
         balance-=b;
        cout<<"amount withdraw=$"<<b<<"  know availabe balance=$S"<<balance;
     }
     else{
        cout<<"invalide amount";
     }

   }


};

// objects of class
int main(){

    bankaccount person(123456688,10000);
    person.deposite(3000);
    person.withdrawamount(200);

}