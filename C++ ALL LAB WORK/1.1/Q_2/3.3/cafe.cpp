

#include <iostream>

using namespace std;




class Cafe
{
private:
    int cafe_id;
    string cafe_name;
    string cafe_type;
    int cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
   
    Cafe()
    {
        cout << "\nEnter Cafe Details\n";

        cout << "Cafe ID: ";
        cin >> cafe_id;

        cout << "Cafe Name: ";
        cin >> cafe_name;

        cout << "Cafe Type (rooftop/normal): ";
        cin >> cafe_type;

        cout << "Cafe Rating (1-5): ";
        cin >> cafe_rating;

        cout << "Cafe Location: ";
        cin >> cafe_location;

        cout << "Establish Year: ";
        cin >> cafe_establish_year;

        cout << "Staff Quantity: ";
        cin >> cafe_staff_quantity;
    }

    void DisplayCafeDetails()
    {
        cout << "\n--- Cafe Details ---\n";
        cout << "Cafe ID        :   " << cafe_id << endl;
        cout << "Cafe Name      :   " << cafe_name << endl;
        cout << "Cafe Type      :   " << cafe_type << endl;
        cout << "Cafe Rating    :   " << cafe_rating << endl;
        cout << "Cafe Location  :   " << cafe_location << endl;
        cout << "Establish Year :   " << cafe_establish_year << endl;
        cout << "Staff Quantity :   " << cafe_staff_quantity << endl;
    }
};

int main()
{
    int n;


    
    cout << "Enter number of cafes: ";
    
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEntering details of cafe " << i + 1 << endl;

        Cafe c;   
        c.DisplayCafeDetails();
    }

    return 0;
}
