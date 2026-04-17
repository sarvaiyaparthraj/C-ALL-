#include <iostream>

using namespace std;

class Employee
{
protected:

    int emp_id;
    string emp_name;
    int emp_age;
    int emp_salary;

public:

    void setdata(int id, string name, int age, int salary)
    {
        emp_id = id;
        emp_name = name;
        emp_age = age;
        emp_salary = salary;
    }

    virtual void display()

    {
        cout << "Employee ID     : " << emp_id << endl;
        cout << "Employee Name   : " << emp_name << endl;
        cout << "Employee Age    : " << emp_age << endl;
        cout << "Employee Salary : " << emp_salary << endl;
    }

    virtual ~Employee() {}
};


class FullTimeEmployee : public Employee

{
    int bonus;

public:

    void setFullTimeData(int id, string name, int age, int salary, int b)
    {
        setdata(id, name, age, salary);
        bonus = b;
    }

    void display() override
    {
        Employee::display();
        cout << "Bonus           : " << bonus << endl;
        cout << "----------------------" << endl;
    }
};


class PartTimeEmployee : public Employee

{
    int hours_works;

public:

    void setPartTimeData(int id, string name, int age, int salary, int h)
    {
        setdata(id, name, age, salary);
        hours_works = h;
    }

    void display() override

    {
        Employee::display();
        cout << "Hours Worked    : " << hours_works << endl;
        cout << "----------------------" << endl;
    }
};

int main()

{
    Employee *emp[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Delete Employee\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int type;
            cout << "1. Full Time  2. Part Time : ";
            cin >> type;

            int id, age, salary;
            string name;

            cout << "Enter ID, Name, Age, Salary: ";
            cin >> id >> name >> age >> salary;

            if (type == 1)
            {
                int bonus;
                cout << "Enter Bonus: ";
                cin >> bonus;

                emp[count] = new FullTimeEmployee();
                ((FullTimeEmployee *)emp[count])->setFullTimeData(id, name, age, salary, bonus);
            }
            else
            {
                int hours;
                cout << "Enter Hours Worked: ";
                cin >> hours;

                emp[count] = new PartTimeEmployee();
                ((PartTimeEmployee *)emp[count])->setPartTimeData(id, name, age, salary, hours);
            }

            count++;
        }

        else if (choice == 2)

        {
            cout << "\n--- Employee List ---\n";
            for (int i = 0; i < count; i++)
            {
                emp[i]->display();
            }
        }

        else if (choice == 3)

        {
            if (count > 0)
            {
                delete emp[count - 1];
                count--;
                cout << "Employee deleted.\n";
            }
            else
            {
                cout << "No employees to delete.\n";
            }
        }

    } while (choice != 4);

   
    for (int i = 0; i < count; i++)

    {
        delete emp[i];
    }

    cout << "Program exited.\n";

    return 0;

}