#include <iostream>
using namespace std;

int main()
{
    int seconds;
    int hours, minutes, remainingSeconds;

    cout << "Enter total seconds: ";
    cin >> seconds;

    hours = seconds / 3600;
    remainingSeconds = seconds % 3600;
    minutes = remainingSeconds / 60;

    remainingSeconds = remainingSeconds % 60;
    cout << "Time = " << hours << ":" << minutes << ":" << remainingSeconds;

    return 0;
}