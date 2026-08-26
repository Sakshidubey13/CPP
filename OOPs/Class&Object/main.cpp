#include <iostream>
using namespace std;

// In class variable and method store

class Car
{
    // data store place ya blueprint.
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
    // car data
    // int engineNo = 3;
    // string modelname = "x1";
    // string color = "red";
    // string type = "suv";
    // bool isEv = false;
    // if car name ka variable multiple time uss kar sakte haii.
    // like class is a image and object is a real photo
    Car c1; // object make c1 => variale  .
            // data storage format
    c1.color = "red";
    c1.engineNo = 133;
    c1.isEV = false;
    c1.modelName = "X1";
    c1.type = "SUV";

    // data print
    cout << c1.engineNo;
    return 0;
}






