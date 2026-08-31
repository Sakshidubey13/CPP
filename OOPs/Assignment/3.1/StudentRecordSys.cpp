#include <iostream>
using namespace std;

class Student
{
private:
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_email;
    string stu_college;

public:
    void setData()
    {
        cout << "Enter Student ID: ";
        cin >> stu_id;

        cout << "Enter Student Name: ";
        cin >> stu_name;

        cout << "Enter Student Age: ";
        cin >> stu_age;

        cout << "Enter Student Course: ";
        cin >> stu_course;

        cout << "Enter Student City: ";
        cin >> stu_city;

        cout << "Enter Student Email: ";
        cin >> stu_email;

        cout << "Enter Student College: ";
        cin >> stu_college;
    }

    void display()
    {
        cout << "Student ID: " << stu_id << endl;
        cout << "Student Name: " << stu_name << endl;
        cout << "Student Age: " << stu_age << endl;
        cout << "Student Course: " << stu_course << endl;
        cout << "Student City: " << stu_city << endl;
        cout << "Student Email: " << stu_email << endl;
        cout << "Student College: " << stu_college << endl;
    }
};

int main()
{
    Student s[5];

    cout << "Enter Details of 5 Students" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << i + 1 << endl;
        s[i].setData();
    }

    cout << "Student Records" << endl;

    for (int i = 0; i < 5; i++)
    {
        s[i].display();
    }

    return 0;
}