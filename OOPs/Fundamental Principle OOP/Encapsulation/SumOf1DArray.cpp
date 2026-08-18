#include <iostream>
using namespace std;

class Array
{
public:
    int arr[5];
    int sum;

    void set(int arr[])
    {
        for (int i = 0; i < 5; i++)
        {
            this->arr[i] = arr[i];
        }
    }

    void get()
    {
        cout << "Sum = " << sum << endl;
    }

    void calculate(){
        this->sum = 0;
        for(int i=0;i<5;i++)
        {
            this->sum = this->sum + this->arr[i];
        }
    }
};

int
main()
{
    Array a1;
    int arr[5] = {56,20,30,40,50};
    a1.set(arr);
    a1.calculate();
    a1.get();


    return 0;
}