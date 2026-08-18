#include <iostream>
using namespace std;

class Sum
{
public:
    int n;
    int sum;
    void set(int n)
    {
        this->n = n;
    }
    void get()
    {
        cout << "n = " << n << endl;
        cout << "Sum = " << sum << endl;
    }
    void calculate()
    {
        this->sum = 0;
        int i = 1;
        while (i <= this->n)
        {
            this->sum = this->sum + i;
            i++;
        }
    }
};

int main()
{
    Sum s1;
    s1.set(10);
    s1.calculate();
    s1.get();
    return 0;
}