#include <iostream>
using namespace std;

// OOP
// OOp have a 4 fundamental principle
// 1.Encapsulation
//  2. Inheritance
// 3. Polymorphism
//  4. Abstraction

// 1. Encapsulations ==> In data in encapsulation we capsulate/sepprate code in two different section one is data(attributes) and second is process(methods).
//attributes in starting at the class and methods at below attributes
//each process should be in seprate methods.
//input function use set keyword for function naming
//output function use get keyword for function naming
//class coading structure organize and well structured.
//code become more reusable.

class Student
{
public:
    int id;
    string name;
    string course;
    int age;

    void setStudent(int id, int age, string name, string course)
    {
        this->id = id;
        this->age = age;
        this->name = name;
        this->course = course;
    }
    void getStudent()
    {
        cout << endl;
        cout << "id = " << id << endl;
        cout << "age = " << age << endl;
        cout << "naem = " << name << endl;
        cout << "course = " << course << endl;
        cout << endl;

    }
};
int main()
{
    return 0;
}