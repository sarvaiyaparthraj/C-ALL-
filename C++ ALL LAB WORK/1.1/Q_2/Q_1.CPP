#include <iostream>
using namespace std;

int main()
{
    int p, i;

    cout << "Enter array size: ";

    cin >> p;

    int a[p];

    cout << "Enter array Elements :\n";

    for (i = 0; i < p; i++)
        
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    cout << "Even numbers are: ";

    for (i = 0; i < p; i++)
    {
        if (a[i] % 2 == 0)
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}
