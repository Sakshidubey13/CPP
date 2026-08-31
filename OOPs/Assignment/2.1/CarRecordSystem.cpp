#include <iostream>
using namespace std;

class Car
{
public:
    int car_id;
    string car_company_name;
    string car_color;
    string car_model;
    int car_release_year;

    void input()
    {
        cout << "Enter Car ID: ";
        cin >> car_id;

        cout << "Enter Car Company Name: ";
        cin >> car_company_name;

        cout << "Enter Car Color: ";
        cin >> car_color;

        cout << "Enter Car Model: ";
        cin >> car_model;

        cout << "Enter Car Release Year: ";
        cin >> car_release_year;
    }

    void display()
    {
        cout << "Car ID: " << car_id << endl;
        cout << "Company Name: " << car_company_name << endl;
        cout << "Color: " << car_color << endl;
        cout << "Model: " << car_model << endl;
        cout << "Release Year: " << car_release_year << endl;
    }
};

int main()
{
    Car c[4];

    cout << "Enter details of 4 Cars"<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "Car " << i + 1 << endl;
        c[i].input();
    }

    cout << "Car Records";

    for (int i = 0; i < 4; i++)
    {
        c[i].display();
    }

    return 0;
}