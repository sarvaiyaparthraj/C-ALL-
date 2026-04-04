#include <iostream>
using namespace std;

class TimeConverter
{

public:

    void timeToSeconds(int hours, int minutes, int seconds)

    {
        int totalSeconds;

        totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

        cout << "Total seconds: " << totalSeconds;
    }
};

int main()
{
    int hour, minutes, second;


    cout << "Enter hours: ";
    cin >> hour;

    cout << "Enter minutes: ";
    cin >> minutes;

    cout << "Enter seconds: ";
    cin >> second;

    TimeConverter obj;
    obj.timeToSeconds(hour, minutes, second);

    
    return 0;
}