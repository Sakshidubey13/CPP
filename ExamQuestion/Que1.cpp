
// Create a class `Laptop` with private attributes `name`, `price`, `processor`, and a parameterized constructor.Demonstrate the instantiation of objects using this construcor

#include <iostream>
using namespace std;

class Laptop
{
private:
    string name;
    int price;
    string processor;

public:
    // Parameterized constructor
    Laptop(string n, float p, string processor)
    {
        this->name = n;
        this->price = p;
        this->processor = processor;
    }

    void display()
    {
        cout << "Laptop Name: " << this->name << endl;
        cout << "Price: Rs. " << this->price << endl;
        cout << "Processor: " << this->processor << endl;
    }
};

int main()
{
    Laptop l1("HP Laptop", 55000, "Intel Core i3");
    Laptop l2("Lenovo Laptop", 60000, "Intel Core i7");

    cout << "Laptop 1" << endl;
    l1.display();

    cout << endl << "Laptop 2" << endl;
    l2.display();

    return 0;
}