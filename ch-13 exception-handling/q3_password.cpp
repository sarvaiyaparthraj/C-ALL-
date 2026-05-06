#include <iostream>

using namespace std;

int main()
{
    string password;

    bool hasUpper = false;

    cout << "Enter Password : ";

    cin >> password;

    try
    {
        for (int i = 0; i < password.length(); i++)

        {
            if (password[i] >= 'A' && password[i] <= 'Z')

            {
                hasUpper = true;

                break;
            }
        }

        if (!hasUpper)

        {

            throw "Password must contain at least one uppercase letter";

        }


        cout << "Password Set Successfully" << endl;

    }

    catch (const char *msg)

    {

        cout << "Error : " << msg << endl;

    }

    return 0;
}