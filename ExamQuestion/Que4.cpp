#include <iostream>
using namespace std;

class Shape
{
private:
    string Circle;
    double area;

public:
    void setColor(string Circle)
    {
        this->Circle = Circle;
    }
   

    string getColor()
    {
        return this->Circle;
    }

    void setArea(int area)
    {
       this-> area = area ;
    }

    int getArea()
    {
        return this->area;
    }

    virtual void displayDetails()
    {
        cout << "Shape" << endl;
    }
};

class Circle : public Shape
{
private:
    int radius;

public:
    Circle(int radius)
    {
        this->radius = radius;
    }

    void displayDetails() override
    {
        int a = 3.14 * radius * radius;
        setArea(a);

        cout << "Circle" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Radius: " << this-> radius << endl;
        cout << "Area: " << getArea() << endl;
        cout << endl;
    }
};

class Rectangle : public Shape
{
private:
  int length, width;

public:
    Rectangle(int l, int w)
    {
        this->length = l;
        this->width = w;
    }

    void displayDetails()
    {
        int a = length * width;
        setArea(a);

        cout << "Rectangle" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Length: " << this->length << endl;
        cout << "Width: " << this->width << endl;
        cout << "Area: " << getArea() << endl;
        cout << endl;
    }
};

int main()
{
    Circle c(5);
    Rectangle r(10, 4);

    c.setColor("Red");
    r.setColor("Blue");

    Shape *shapes[2];

    shapes[0] = &c;
    shapes[1] = &r;

    for (int i = 0; i < 2; i++)
    {
        shapes[i]->displayDetails();
    }

    return 0;
}