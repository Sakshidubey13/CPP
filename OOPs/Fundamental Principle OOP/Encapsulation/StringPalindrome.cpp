#include <iostream>
#include <string>
using namespace std;

class Palindrome
{
public:
    string str;
    string rev;

    void set(string str)
    {
        this->str = str;
    }

    void get()
    {
        cout << "String = " << str << endl;
    }

    void check()
    {
        this->rev;

        for (int i = this->str.length() - 1; i >= 0; i--)
        {
            this->rev = this->rev + this->str[i];
        }
        if (this->str == this->rev)
        {
            cout << "Palindrome" << endl;
        }
        else
        {
            cout << "Not Palindrome" << endl;
        }
    }
};
int main()
{

    Palindrome p1;
    p1.set("mam");
    p1.get();
    p1.check();

    return 0;
}