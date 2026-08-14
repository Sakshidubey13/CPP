#include <iostream>
using namespace std;

int main()
{
    int n, i = 2;

    cout << "Enter Number : ";
    cin >> n;

    for (i = 2; i <= n; i += 2)
    {
        cout << i<<endl;
    }
        return 0;
}