#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter A number : ";
    cin >> a;

    cout << "Enter B number : ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Swapping two number !" << endl;
    cout << "A : " << a << endl;
    cout << "B : " << b << endl;

    return 0;
}