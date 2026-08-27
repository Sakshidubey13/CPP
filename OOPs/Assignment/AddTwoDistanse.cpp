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
        cout << "Inch : ";
        cin >> feet1;
        cin >> inch1;

        cout << "Enter Secound distance : " << endl;
        cout << "Feet : ";
        cout << "Inch : ";
        cin >> feet2;
        cin >> inch2;
    }
};

int main()
{
    return 0;
};
