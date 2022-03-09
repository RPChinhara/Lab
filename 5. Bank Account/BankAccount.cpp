/*
    Write a class ACCOUNT that represents your bank account then use it.
    
    The class should allow you to deposit money, withdraw money, calculate interest,
    send you a message if you have insufficient balance.

*/


#include <iostream>
using namespace std;

class Account
{
private:
    double balance, amount;

public:

    Account(double initial_money)
    {
        balance = initial_money;
        cout<<"Your bank balance is: "<<balance<<endl;
    }

    void deposit()
    {
        cout<<"Enter the deposit amount: ";
        cin>>amount;

        balance = balance + amount;

        cout<<"Your total balance: "<<balance<<endl;
    }

    void withdraw()
    {
        cout<<"Enter the withdrawal amount: ";
        cin>>amount;
        
        if(balance < amount)
        {
            cout<<"You have insufficient balance.\n Exitting";
            exit(0);
        }

        balance = balance - amount;

        cout<<"Your remaining balance is: "<<balance<<endl;        
    }

    void interest(int time)
    {
        // Rate is 2.5% p.a.
        // Time will be entered in years
        const float rate = 0.025;
        double interest = 0;

        interest = balance * rate * time;

        cout<<"The interest after "<<time<<" years is: "<<interest<<endl;
    }
};

int main()
{
    Account myAccount(2000);
    
    myAccount.deposit();
    myAccount.withdraw();
    myAccount.interest(5);
        
    return 0;
}