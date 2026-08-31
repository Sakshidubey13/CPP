#include <iostream>
using namespace std;

class RBI
{
public:
    float rate = 5.0;

    void getROI()
    {
        cout << "RBI Rate of Interest: " << rate << "%" << endl;
    }
};

class SBI : public RBI
{
public:
    void getROI()
    {
        rate = 6.5;
        cout << "SBI Rate of Interest: " << rate << "%" << endl;
    }
};

class BOB : public RBI
{
public:
    void getROI()
    {
        rate = 7.0;
        cout << "BOB Rate of Interest: " << rate << "%" << endl;
    }
};

class ICICI : public RBI
{
public:
    void getROI()
    {
        rate = 7.5;
        cout << "ICICI Rate of Interest: " << rate << "%" << endl;
    }
};

int main()
{
    SBI s;
    BOB b;
    ICICI i;

    s.getROI();
    b.getROI();
    i.getROI();

    return 0;
}