#include <iostream>
using namespace std;

class Car
{
public:
    int engineNo;
    string modelName;
    string color;
    string type;
    bool isEV;
    // function create
    void input(int e, string m, string c, string t, bool ev)
    {
        engineNo = e;
        modelName = m;
        color = c;
        type = t;

        isEV = ev;
    }
};

int main()
{
    Car c1, c2, c3;
    c1.input(134, "XYZ13", "BLACK", "SUV", false);
    c2.input(1345, "m5", "BLUE", "Seden", true);

    cout << c1.modelName << endl;
    cout << c1.engineNo << endl;
    cout << c1.color << endl;
    cout << c1.type << endl;
    cout << c2.modelName << endl;

    return 0;
}