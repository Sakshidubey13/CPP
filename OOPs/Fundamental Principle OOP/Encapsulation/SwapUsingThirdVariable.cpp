#include <iostream>
using namespace std;

class Swap
{
public:
    int a;
    int b;
    void set(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void get()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
    void swaping()
    {
        int temp;
        temp = this->a;
        this->a = this->b;
        this->b = temp;
    }
};

int main()
{
    Swap s1;
    s1.set(40, 30);
    s1.get();
    cout << "After swapping ....." << endl;
    s1.swaping();
    s1.get();
    return 0;
}