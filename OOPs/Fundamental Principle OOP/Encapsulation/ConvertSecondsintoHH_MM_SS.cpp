#include <iostream>
using namespace std;

class Time
{
public:
    int seconds;
    int minute;
    int hours;
    int second;

    void set(int seconds)
    {
        this->seconds = seconds;
    }

    void get()
    {
        cout << "Time = " << hours << ":" << minute << ":" << second << endl;
    }

    void convert()
    {
        this->hours = this->seconds / 3600;
        int remaining = this->seconds % 3600;
        this->minute = remaining / 60;
        this->second = remaining % 60;
    }
};

int main()
{
    Time t1;
    t1.set(50416);
    t1.convert();
    t1.get();
    return 0;
}