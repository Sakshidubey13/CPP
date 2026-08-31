#include <iostream>
using namespace std;

class Employee
{
public:
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    float emp_salary;
    string emp_city;
    int emp_experience;
    string emp_company_name;

    void input()
    {
        cout << "Enter Employee ID:  ";
        cin >> emp_id;

        cout << "Enter Employee Name:  ";
        cin >> emp_name;

        cout << "Enter Employee Age:  ";
        cin >> emp_age;

        cout << "Enter Employee Role:  ";
        cin >> emp_role;

        cout << "Enter Employee Salary:   ";
        cin >> emp_salary;

        cout << "Enter Employee City:  ";
        cin >> emp_city;

        cout << "Enter Employee Experience (years):   ";
        cin >> emp_experience;

        cout << "Enter Company Name: ";
        cin >> emp_company_name;
    }

    void display()
    {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Employee Name: " << emp_name << endl;
        cout << "Employee Age: " << emp_age << endl;
        cout << "Employee Role: " << emp_role << endl;
        cout << "Employee Salary: " << emp_salary << endl;
        cout << "Employee City: " << emp_city;
        cout << "Employee Experience: " << emp_experience << " years" << endl;
        cout << "Company Name: " << emp_company_name << endl;
    }
};

int main()
{
    Employee e[5];

    cout << "Enter details of 5 Employees " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Employee " << i + 1 << endl;
        e[i].input();
    }

    cout << "Employee Records";

    for (int i = 0; i < 5; i++)
    {
        e[i].display();
    }

    return 0;
}