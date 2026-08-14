#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;

    cout << "Enter number : ";
    cin >> n;

    while (i <= n)
    {
        cout << i << endl;
        i += 2;
    }

    return 0;
}