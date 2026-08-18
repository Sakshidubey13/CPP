#include <iostream>
using namespace std;

class Digit
{
public:
    int n;
    int first;
    int last;
    int sum;

    void set(int n)
    {
        this->n = n;
    }

    void get()
    {
        cout << "First digit = " << first << endl;
        cout << "last digit = " << last << endl;
        cout << "sum = " << sum << endl;
    }

    void calculate()
    {
        int temp = this->n;
        this-> last = temp % 10;

        while (temp >= 10)
        {
            temp = temp / 10;
        }
        this->first = temp;
        this->sum = this->first + this->last;
    }
};
int main()
{
    Digit d1;
    d1.set(12349);
    d1.calculate();
    d1.get();
    return 0;
}