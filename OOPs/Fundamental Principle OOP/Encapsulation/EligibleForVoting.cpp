#include <iostream>
using namespace std;

class Voiting
{
public:
    int age;

    void set(int age)
    {
        this->age = age;
    }
    void get()
    {
        cout << "Age =  " << age << endl;
    }
    void check()
    {
        if (this->age >= 18)
        {
            cout << "Eligible for vote " << endl;
        }
        else{
            cout<<"Not eligible for vote "<< endl;
        }
    }
};

int
main()
{
    Voiting v1;
    v1.set(20);
    v1.get();
    v1.check();
    
    return 0;
}