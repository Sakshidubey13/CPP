#include <iostream>
using namespace std;

class Distance
{
    int feet1, inch1;
    int feet2, inch2;

    int feet;
    int inch;

public:
    void set()
    {

        cout << "Enter first distance : " << endl;
        cout << "Feet : ";
        cin >> feet1;

        cout << "Inch : ";
        cin >> inch1;

        cout << "Enter Secound distance : " << endl;
        cout << "Feet : ";
        cin >> feet2;

        cout << "Inch : ";
        cin >> inch2;

        feet = feet1 + feet2;
        inch = inch1 + inch2;

        // Convert inches into feet
        feet = feet + (inch / 12);
        inch = inch % 12;

        cout << "Total Distance : " << feet << " feet " << inch << " inch" << endl;
    }
};

int main()
{
    
    Distance d;
    d.set();
    
    return 0;
};
