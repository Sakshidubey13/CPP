#include <iostream>
using namespace std;

class Number
{
public:
    int n;

    void set(int n)
    {
        this->n = n;
    }
    void get()
    {
        cout << "n = " << n << endl;
    }

    void print()
    {
        int i = 1;
        cout << "1 to n: " << endl;

        while (i <= this->n)
        {
            cout << i << endl;
            i++;
        }

        cout << endl;
        cout << "n to 1 : " << endl;
        i = this->n;
        while (i >= 1)
        {
            cout << i << endl;
            i--;
        }

        cout << endl;
        cout << "Even Numbers :" << endl;
        i = 1;
        while (i <= this->n)
        {
            if (i % 2 == 0)
            {
                cout << i << endl;
            }
            i++;
        }

        cout << endl;
        cout << "Odd Numbers:" << endl;
        i = 1;
        while (i <= this->n)
        {
            if (i % 2 != 0){
                cout<<i<<endl;

            }
            i++;

        }
        cout<<endl;
    }
};

int main()
{
    Number n1;
    n1.set(5);
    n1.get();
    n1.print();
    return 0;
}