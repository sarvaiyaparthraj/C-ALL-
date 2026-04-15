#include <iostream>

using namespace std;

class Employee
{
public:

    string name;

    int id;

    void getData()
    {
        cout << "Enter Name: ";
        
        cin >> name;

        cout << "Enter ID: ";

        cin >> id;
    }
};

class Manager : public Employee

{
public:

    void display()

    {
        cout << "\nManager Name: " << name;
        cout << "\nID: " << id;
    }
};

class Developer : public Employee

{
public:

    void display()

    {
        cout << "\nDeveloper Name: " << name;
        cout << "\nID: " << id;
    }
};

int main()

{

    Manager m;
    
    Developer d;

    cout << "\n--- Manager ---\n";

    m.getData();

    m.display();

    cout << "\n\n--- Developer ---\n";

    d.getData();

    d.display();

    return 0;
}