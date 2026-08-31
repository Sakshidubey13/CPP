#include <iostream>
using namespace std;

class X
{
public:
    int a, b, c;
};

class Y : public X
{
public:
    void setData()
    {
        cout << "Enter value of a: ";
        cin >> a;

        cout << "Enter value of b: ";
        cin >> b;

        cout << "Enter value of c: ";
        cin >> c;
    }

    void getData()
    {
        int sum;

        sum = (a * a * a) + (b * b * b) + (c * c * c);

        cout << "Sum of cubes = " << sum << endl;
    }
};

int main()
{
    Y obj;
    obj.setData();
    obj.getData();
    return 0;
}