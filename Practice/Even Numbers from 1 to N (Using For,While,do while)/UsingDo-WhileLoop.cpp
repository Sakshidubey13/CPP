#include <iostream>
using namespace std;

int main()
{
    int n, i = 2;
    cout << "Enter Number : ";
    cin >> n;
 
    do
    {
        cout<<i<<endl;
        i+=2;
    } while (i<=n);
    
    return 0;
}