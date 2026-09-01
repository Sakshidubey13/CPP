#include <iostream>
using namespace std;

class Time
{
    int hh, mm, ss;

public:
    void set()
    {
        cout << "Enter hours : ";
        cin >> hh;

        cout << "Enter minutes : ";
        cin >> mm;

        cout << "Enter seconds : ";
        cin >> ss;

        // Convert seconds into minutes
        mm = mm + (ss / 60);
        ss = ss % 60;

        // Convert minutes into hours
        hh = hh + (mm / 60);
        mm = mm % 60;

        cout << "Formatted Time : " << hh << ":" << mm << ":" << ss;
    }
};

int main()
{
    Time t;
    t.set();
    return 0;
}

