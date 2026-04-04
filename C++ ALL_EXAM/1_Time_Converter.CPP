

#include <iostream>
using namespace std;

class timeconverter
{

public:
    void SecondToTime(int totalSecond)
    {
        int hour, minutes, second;

        hour = totalSecond / 3600;

        minutes = (totalSecond % 3600) / 60;

        second = totalSecond % 60;

        cout << "HH:MM:SS =  "

        
        << hour << ":"
        
        << minutes << ":"
        
        << second <<"0";
    }
};

int main()
{
    int second;

    cout << "Enter total second: ";
    
    cin >> second;

    timeconverter t1;

    t1.SecondToTime(second);

    return 0;
}