#include <iostream>
#include <string>
using namespace std;

// ACCESS Modifire ==> its used to modify access of the methods and attributes outside the class.
// Types of access modifire .
// 1. PUBLIC == ANYWHERE can accesss outside and inside the class .
// 2 . Private == only accessible in the class.
// 3. Protected  == accessible in the class and child class.

// Any attributes and methods are accessible in the same class.
// In class by   default access is private.

// Local variable  and global variable ;
// Local variable ==> variable declared inside the function . Local variable only access within the same function.

// Global Variable == global variable declared outside the function .Global variable can access across all function of the class .

// if global variable and local variable both have  same name function give first priority  to local vaiable.
// to differentiate local v and global v, use this keyword /
//This keyword represent the global variable.

//input ==> setter ==> setStudent
//output ==> getter ==> getStudent

class Student
{
public:
    // Global Variable
    int grid;
    string name;
    string course;

    // setter function 
    void input(int grid, string name, string course) // Local variable
    {
        int x;
        this->grid = grid; // ye this keyword ka usse karne per ban gya global variable

        this->name = name;
        this->course = course;
    }

    //geter function 
    // private:
    void output()
    {

        cout << " Grid - " << this->grid << endl;
        cout << " Name - " << this->name << endl;
        cout << " Coures - " << this->course << endl;
    }
};
int main()
{
    Student raj;
    raj.input(123, "Raj sharma ", "PHP");
    raj.output();

    return 0;
}