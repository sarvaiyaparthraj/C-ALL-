#include <iostream>
using namespace std;

class Customer
{
private:
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_city;
    string cust_mobile_number;
    int cust_simcard_validity;
    string cust_telecom_brand_name;

public:
    void setData(int id, string name, int age, string city,
                 string mobile, int validity, string brand)
    {
        cust_id = id;
        cust_name = name;
        cust_age = age;
        cust_city = city;
        cust_mobile_number = mobile;
        cust_simcard_validity = validity;a
        cust_telecom_brand_name = brand;
    }

    void displayData()
    {
        cout << "\nCustomer ID: "    << cust_id;
        cout << "\nName: "           << cust_name;
        cout << "\nAge: "            << cust_age;
        cout << "\nCity: "           << cust_city;
        cout << "\nMobile Number: "  << cust_mobile_number;
        cout << "\nSIM Validity: "   << cust_simcard_validity << " years";
        cout << "\nTelecom Brand: "  << cust_telecom_brand_name << endl;
    }
};

int main()
{
    Customer c[5];

    for(int i = 0; i < 5; i++)
    {
        int id, age, validity;
        string name, city, mobile, brand;

        cout << "\nEnter details of Customer " << i + 1 << endl;

        cout << "ID: ";
        cin >> id;

        cout << "Name: ";
        cin >> name;

        cout << "Age: ";
        cin >> age;

        cout << "City: ";
        cin >> city;

        cout << "Mobile Number: ";
        cin >> mobile;

        cout << "SIM Validity (years): ";
        cin >> validity;

        cout << "Telecom Brand (Jio/Airtel/Vi): ";
        cin >> brand;

        c[i].setData(id, name, age, city, mobile, validity, brand);
    }

    cout << "\n--- Customer Records ---\n";

    for(int i = 0; i < 5; i++)
    {
        c[i].displayData();
    }

    return 0;
}