#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter Your Age : ";

    cin >> age;

    try
    {
        if (age < 18)

        {
            throw "Not Eligible For Voting";
        }

        cout << "Age = " << age << endl;

        cout << "You  Eligible For Voting" << endl;
    }

    catch (const char *msg)
    
    {
        cout << "Error : " << msg << endl;
    }

    return 0;
}