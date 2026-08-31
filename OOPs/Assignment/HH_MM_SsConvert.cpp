#include <iostream>
using namespace std;

class Time
{
    int seconds;
    int hours;
    int minutes;
    int sec;

public:
    void set()
    {
        cout << "Enter seconds : ";
        cin >> seconds;

        hours = seconds / 3600;
        seconds = seconds % 3600;
        minutes = seconds / 60;
        sec = seconds % 60;

        cout << "Time : " << hours << ":" << minutes << ":" << sec;
    }
};

int main()
{
    Time t;
    t.set();
    return 0;
}