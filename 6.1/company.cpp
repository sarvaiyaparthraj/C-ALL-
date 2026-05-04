#include <iostream>
using namespace std;

class Admin
{
protected:
    string company_name;
    
    float manager_salary;
    float employee_salary;
    int total_staff;
    float total_annual_revenue;
    bool can_terminate;

public:
    Admin(string com_name, float ms, float es, int staff, float revenue, bool terminate)
    {
        company_name = com_name;
        manager_salary = ms;
        employee_salary = es;
        total_staff = staff;
        total_annual_revenue = revenue;
        can_terminate = terminate;
    }

    virtual void myAccess() = 0;
};

class Manager : public Admin
{
public:
    Manager(string cname, float ms, float es, int staff, float revenue, bool terminate)

        : Admin(cname, ms, es, staff, revenue, terminate) {}

    void myAccess()
    {
        cout << "\n--- Manager Access ---" << endl;

        cout << "Company Name: " << company_name << endl;

        cout << "Manager Salary: " << manager_salary << endl;

        cout << "Total Staff: " << total_staff << endl;

        cout << "Can Terminate: " << (can_terminate ? "Yes" : "No") << endl;
    }
};

class Employee : public Manager
{
public:
    Employee(string cname, float ms, float es, int staff, float revenue, bool terminate)

        : Manager(cname, ms, es, staff, revenue, terminate) {}

    void myAccess()
    {
        cout << "\n--- Employee Access ---" << endl;

        cout << "Company Name: " << company_name << endl;
        
        cout << "Employee Salary: " << employee_salary << endl;

        cout << "Total Annual Revenue: " << total_annual_revenue << endl;
    }
};

int main()
{
    Manager m("sarvaiya", 50000, 20000, 100, 9000000, true);

    Employee e("Parthrajsinh", 50000, 20000, 100, 8000000, true);

    m.myAccess();

    e.myAccess();

    return 0;
}