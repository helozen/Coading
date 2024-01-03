#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double Area() = 0;
};

class Rectangle : public Shape
{
public:
    double width;
    double height;

    Rectangle(double w, double h) : width(w), height(h) {}

    double Area() override
    {
        return width * height;
    }
};

class Triangle : public Shape
{
public:
    double base;
    double height;

    Triangle(double b, double h) : base(b), height(h) {}

    double Area() override
    {
        return 0.5 * base * height;
    }
};

int main()
{
    Rectangle rect(8.0, 6.0);
    Triangle tri(7.0, 11.0);

    Shape *shapePtr1 = &rect;
    Shape *shapePtr2 = &tri;

    cout << "Rectangle Area: " << shapePtr1->Area() << endl;
    cout << "Triangle Area: " << shapePtr2->Area() << endl;

    return 0;
}
