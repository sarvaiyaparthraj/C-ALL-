



#include <iostream>
using namespace std;


class g {

protected:

    float celsius;

};


class h : public g {

protected:

    float fahrenheit;

public:

    void setCelsius() {

        cout << "Enter temperature in Celsius: ";

        cin >> celsius;
    }

    void toFahrenheit() {
        
        fahrenheit = (celsius * 9/5) + 32;

        cout << "Fahrenheit = " << fahrenheit << endl;
    }
};


class i : public h {

public:

    void toKelvin() {

        float kelvin = (fahrenheit - 32) * 5/9 + 273.15;
        
        cout << "Kelvin = " << kelvin << endl;
    }
};


int main() {
    i obj;

    obj.setCelsius();

    obj.toFahrenheit();

    obj.toKelvin();

    return 0;
}