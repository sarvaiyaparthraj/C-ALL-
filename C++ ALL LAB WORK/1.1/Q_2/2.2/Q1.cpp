#include <iostream>
using namespace std;

class Car
{


private:

    int car_id;
    string car_company_name;
    string car_colour;
    int car_model;
    int car_release_year;

public:

    void car_detail()

    {

        cout << "\nEnter car ID:";
        cin >> car_id;

        cout << "\nEnter car Company Name:";
        cin >> car_company_name;

        cout << "\nEnter car Colour:";
        cin >> car_colour;

        cout << "\nEnter car Model:";
        cin >> car_model;

        cout << "\nEnter car Release year:";
        cin >> car_release_year;
    }


    void car_check()

    {

        cout << "Car ID:" << car_id;
        cout << "Car Company name:" << car_company_name;
        cout << "Car Colour:" << car_colour;
        cout << "Car Model:" << car_model;
        cout << "Car Release Year:" << car_release_year;
    }
};


int main()

{

    Car car[4];

    for (int i = 0; i < 4; i++)
    {
        cout << "\n-- Car " << i + 1 << "--";

        car[i].car_detail();
    }

    for (int i = 0; i < 4; i++)
    {

        car[i].car_check();
    }

    return 0;
}
