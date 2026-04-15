#include <iostream>

using namespace std;

class Employee

{

public:

    string name;

    void getName()

    {
        cout << "Enter Name: ";
        cin >> name;
    }
};

class Manager : public Employee

{


};

class Developer : public Employee

{
};

class TeamLead : public Manager, public Developer
{
public:

    void display()
    {
        cout << "\nManager Name: " << Manager::name;
        cout << "\nDeveloper Name: " << Developer::name;
    }
};

int main()
{
    TeamLead t;

    cout << "--- Manager Info ---\n";
    t.Manager::getName();

    cout << "--- Developer Info ---\n";
    t.Developer::getName();

    t.display();

    return 0;
}