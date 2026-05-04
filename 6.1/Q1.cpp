#include <iostream>

using namespace std;

class BankAccount
{
protected:

    int account_no;

    string name;

    double balance;

public:
 
    BankAccount(int acc_no, string name, double balance)
    {
        this->account_no = acc_no;

        this->name = name;

        this->balance = balance;
    }

    virtual void deposit(double amount) = 0;

    virtual void withdraw(double amount) = 0;

    virtual void display() = 0;
};

class Account : public BankAccount
{
public:
    Account(int accNo, string name, double balance)

        : BankAccount(accNo, name, balance)
    {
    }

    void deposit(double amount)

    {

        balance += amount;

        cout << "Deposited amount: " << amount << endl;
    }

    void withdraw(double amount)

    {
        if (amount <= balance)

        {

            balance -= amount;

            cout << "withdrawal amount: " << amount << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void display()
    {
        cout << "\nAccount No: " << account_no << endl;

        cout << "Name: " << name << endl;

        cout << "Balance: " << balance << endl;
        
    }
};

int main()
{
    Account a1(29, "Sarvaiya Parthrahjsinh", 5000);

    a1.display();

    a1.deposit(5000);

    a1.withdraw(1000);

    a1.display();

    return 0;
}