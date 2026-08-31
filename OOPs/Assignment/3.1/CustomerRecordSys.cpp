#include <iostream>
using namespace std;

class Customer
{
private:
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_city;
    string cust_mobile_number;
    int cust_simcard_validity;
    string cust_telecom_brand_name;

public:
    void setData()
    {
        cout << "Enter Customer ID: ";
        cin >> cust_id;

        cout << "Enter Customer Name: ";
        cin >> cust_name;

        cout << "Enter Customer Age: ";
        cin >> cust_age;

        cout << "Enter Customer City: ";
        cin >> cust_city;

        cout << "Enter Customer Mobile Number: ";
        cin >> cust_mobile_number;

        cout << "Enter SIM Card Validity (in years): ";
        cin >> cust_simcard_validity;

        cout << "Enter Telecom Brand Name: ";
        cin >> cust_telecom_brand_name;
    }

    void display()
    {
        cout << "Customer ID: " << cust_id << endl;
        cout << "Customer Name: " << cust_name << endl;
        cout << "Customer Age: " << cust_age << endl;
        cout << "Customer City: " << cust_city << endl;
        cout << "Mobile Number: " << cust_mobile_number << endl;
        cout << "SIM Card Validity: " << cust_simcard_validity << " years" << endl;
        cout << "Telecom Brand: " << cust_telecom_brand_name << endl;
    }
};

int main()
{
    Customer c[5];

    cout << "Enter Details of 5 Customers" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Customer " << i + 1 << endl;
        c[i].setData();
    }

    cout << "Customer Records" << endl;

    for (int i = 0; i < 5; i++)
    {
        c[i].display();
    }

    return 0;
}