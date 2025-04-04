#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Account{
    protected:
        string accountHolderName;
        double accountNo;
        double balance;

    public:
        Account(string name,double accNo,double bal=0){
            accountHolderName=name;
            accountNo=accNo;
            balance=bal;
        }
         // Method to view account details (virtual for possible overriding)
        
        virtual void viewDetails()const{
            cout<<"Account Holed Name :- "<<accountHolderName<<endl;
            cout<<"Account No :- "<<accountNo<<endl;
            cout<<"Balance :- "<<balance<<endl;
        }
        // method for deposite a value of amount 
        virtual void deposit(double amount){
            balance = balance+amount;
            cout<<"Deposit amount :- "<<amount<<endl;
            cout<<"New Balance:- "<<balance<<endl;

        }

        // method of withdrawl a value form balance

        virtual void withdrawl(double amount){
            if(balance<amount){
                cout<<"insufficient balance"<<endl;
            }
            else{
                cout<<"withdrawl successful "<<endl;
                balance=balance-amount;
                cout<<"Remaining Balance :- "<<balance;
            }
        }

        //getter for return balance

        int getbalance(){
            cout<<"Current Balance :- "<<balance;
        }

        int getAccNo(){
            cout<<"Account No :- "<<accountNo;
        }
};

// Derived class for Admin with additional privileges

class Admin : public Account{

    public:
    // Constructor to initialize the admin (inherits from Account)
        //uses an initializer list to call the base class's constructor, This is necessary when Admin inherits from Account, and you want to initialize the inherited data members using the base class constructor.
        Admin(string name, int accNumber, double bal = 0) : Account(name, accNumber, bal) {}
        // Admin privilege: view any customer's details

        void viewCustomerDetails(const Account& customer)const{
            cout<<"Customer Details :- "<<endl;
            customer.viewDetails();
        }
};

