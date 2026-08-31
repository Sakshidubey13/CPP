// Class P → temperature
//  Class Q → toFehrenheit()
//  Class R → toKelvin()

// Formulas
//  Celsius to Fahrenheit :
//  F = (C × 9 / 5) + 32

// Fahrenheit to Kelvin :
// K = (F - 32) × 5 / 9 + 273.15

#include <iostream>
using namespace std;

class P
{
public:
    float temperature;
};

class Q : public P
{
public:
    float toFehrenheit()
    {
        return (temperature * 9 / 5) + 32;
    }
};

class R : public Q
{
public:
    float toKelvin()
    {
        float fahrenheit;

        fahrenheit = toFehrenheit();

        return ((fahrenheit - 32) * 5 / 9) + 273.15;
    }
};

int main()
{
    R obj;

    cout << "Enter temperature in Celsius: ";
    cin >> obj.temperature;

    cout << "Temperature in Fahrenheit: "
         << obj.toFehrenheit() << " F" << endl;

    cout << "Temperature in Kelvin: "
         << obj.toKelvin() << " K" << endl;

    return 0;
}