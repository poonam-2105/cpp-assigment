// 2. Define a class to represent a bank account. Include the following members:
// 3. Data Member:
// -Name of the depositor
// -Account Number
// -Type of Account
// -Balance amount in the account
// Member Functions
// -To assign values
// -To deposited an amount
// -To withdraw an amount after checking balance
// -To display name and balance

#include<iostream>
using namespace std;
class bankaccount{
    public:
    string depositername;
    int  accountnumber;
    string accounttype;
    int balance=0;
   public:
    bankaccount(string name,int ifc,string ac,int blc){
       depositername=name;
       accountnumber=ifc;
       accounttype=ac;
       balance=blc;
    }
    public:
    void depositamount(int amount){
        balance+=amount;
        cout<<"deposited_amount"<<amount<<"current_balance"<<balance;
    }
    void withdrawamount(int amount){
        if (balance>=amount){
            balance-=amount;
            cout<<"depositer_name:"<<depositername<<"from_avlabel_amount:="<<balance<<"amount_withdram"<<amount<<endl;
        }
        else{
            cout<<"insefisent amount in account:"<<accountnumber<<endl;
        }
    }
    void displaye(){
        cout<<"depositer_name:="<<depositername<<endl;
        cout<<"accountnumber:="<<accountnumber<<endl;
        cout<<"accounttype:="<<accounttype<<endl;
        cout<<"balane_availabel:="<<balance<<endl;

    }
};
int main()
{
    bankaccount account("poonam",12345678,"saving",0);
    account.displaye();
    account.depositamount(500);
    account.withdrawamount(15); // Attempt to withdraw more than balance
    account.displaye();
}

