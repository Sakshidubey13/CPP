#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter Number : ";
    cin >> n;

    for (i = 1; i <= n; i += 2)
    {
        cout << i << endl;
    }
    return 0;
}