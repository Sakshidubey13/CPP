#include <iostream>
using namespace std;

class Electricity
{
public:
    int units;
    int bill;

    void set(int units)
    {
        this->units = units;
    }
    void get()
    {
        cout << "Units = " << units << endl;
        cout << "Bill = " << bill << endl;
    }
    void calculate()
    {
        if (this->units <= 100)
        {
            this->bill = this->units * 5;
        }
        else if (this->units <= 200)
        {
            this->bill = (100 * 5) + ((this->units - 100) * 7);
        }
        else
        {
            this->bill = (100 * 5) + (100 * 7) + ((this->units - 200) * 10);
        }
    }
};

int main()
{
    Electricity e1;
    e1.set(400);
    e1.calculate();
    e1.get();

    return 0;
}