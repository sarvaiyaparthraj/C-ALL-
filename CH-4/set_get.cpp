#include <iostream>
using namespace std;

class Bank
{
private:
    int balance = 100000;

public:
    void GetBalance()
    {
        cout << "My balance is: " << balance << endl;
    }

    void SetBalance(int balance)
    {
        this->balance += balance;
    }
};

int main()
{
    Bank B1;
    int amount;

    cout << "Enter my balance: ";
    cin >> amount;

    B1.SetBalance(amount); 
    B1.GetBalance();       

    return 0;
}
