#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "This is Class A" << endl;
    }
};

class B
{
public:
    void show()
    {
        cout << "This is Class B" << endl;
    }
};

class C : public A, public B
{
public:
    void display()
    {
        A::show();
        B::show();
    }
};

int main()
{
    C obj;
    obj.display();
    return 0;
}