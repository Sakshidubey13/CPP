// Define a base class `Shape` with private attributes `color` and `area`. Implement public methods for setting and getting these attributes. Derive two classes, `Circle` and `Rectangle`, from the `Shape` class. Implement methods to calculate the area specific to each shape. Demonstrate abstraction by calling the area calculation methods for both `Circle` and `Rectangle`.
#include <iostream>
using namespace std;

class Shape
{
private:
    string Circle;
    int area;

public:
    void setCircle(string Circle)
    {
        this->Circle = Circle;
    }

    string getCircle()
    {
        return Circle;
    }

    void setArea(int area)
    {
        this->area = area;
    }

    int getArea()
    {
        return this->area;
    }
};

//Circle
class Circle : public Shape
{
private:
    int radius;

public:
    Circle(int r)
    {
        radius = r;
    }

    void calculateArea()
    {
        int a = 3.14 * radius * radius;
        setArea(a);
        cout << "Area of Circle = " << getArea() << endl;
    }
};


//Rectangle
class Rectangle : public Shape
{
private:
    int length, width;

public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    void calculateArea()
    {
        int a = length * width;
        setArea(a);
        cout << "Area of Rectangle = " << getArea() << endl;
    }
};

int main()
{
    Circle c(5);
    Rectangle r(10, 5);

    c.setCircle("Red");
    r.setCircle("Blue");

    c.calculateArea();
    r.calculateArea();

    return 0;
}