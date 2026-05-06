#include <iostream>
using namespace std;

int main()
{
    int num, div;

    cout << "Enter Number : ";

    cin >> num;

    cout << "Enter Divisor : ";

    cin >> div;

    try
    {
        if (div <= 0)

        {
            throw "Divisor must  greater than 0";
        }

        int ans = num / div;


        cout << "Result = " << ans << endl;

    }

    catch (const char *error)
    
    {
        cout << "Error : " << error << endl;
    }

    return 0;
}