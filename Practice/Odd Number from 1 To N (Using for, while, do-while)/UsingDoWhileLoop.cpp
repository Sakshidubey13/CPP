#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;

    cout << "Enter number : ";
    cin >> n;

    do
    {
        cout << i << endl;
        i += 2;
    } while (i <= n);

    return 0;
}