#include <iostream>
using namespace std;

class Vehicle
{
public:
    // Pure virtual functions
    virtual void startEngine() = 0;
    virtual void drive() = 0;
};

class Car : public Vehicle
{
public:
    void startEngine()
    {
        cout << "Car engine started." << endl;
    }

    void drive() 
    {
        cout << "Car is driving." << endl;
    }
};

class Bike : public Vehicle
{
public:
    void startEngine() 
    {
        cout << "Bike engine started." << endl;
    }

    void drive() 
    {
        cout << "Bike is driving." << endl;
    }
};

int main()
{
    Car car;
    Bike bike;

    Vehicle * vehicles[2];

    vehicles[0] = &car;
    vehicles[1] = &bike;

    for (int i = 0; i < 2; i++)
    {
        vehicles[i]->startEngine();
        vehicles[i]->drive();
        cout << endl;
    }

    return 0;
}