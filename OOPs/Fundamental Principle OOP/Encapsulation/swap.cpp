#include <iostream>
using namespace std;

// without using third vaiable.
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
        this->a = this->a + this->b;
        this->b = this->a - this->b;
        this->a = this->a - this->b;
    }
};
int main()
{
    Swap s1;
    s1.set(20, 30);
    s1.get();
    cout << "After swapping ....." << endl;
    s1.swaping();
    s1.get();
    return 0;
}