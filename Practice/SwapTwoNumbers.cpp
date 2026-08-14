#include<iostream>
using namespace std;

int main(){
    int a,b,temp;
    cout<<"Enter A number : ";
    cin >> a;

    cout <<"Enter B number : ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "After swapping .." << endl;
    cout << "A = " << a<<endl;
    cout << "B = "<< b <<endl;

    return 0;

}
